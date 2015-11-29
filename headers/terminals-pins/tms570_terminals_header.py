#!/usr/bin/env python

import sys
import string
import re
import argparse


class chip_pin_desc(object):
  def __init__(self, pin_index = None, mmr_number = None, mmr_pos = None, pin_pad = None):
    self.pin_index = pin_index
    self.mmr_number = mmr_number
    self.mmr_pos = mmr_pos
    self.pin_pad = pin_pad
    self.pin_fnc = {}
    self.pin_fnc_c = {}
    self.pin_defines = {}
  def add_pin_fnc(self, pin_fnc_num, pin_fnc_desc, pin_fnc_c = None):
    if pin_fnc_num in self.pin_fnc:
      if pin_fnc_desc != self.pin_fnc[pin_fnc_num]:
        printf("PIN %d fnction %d conflict %s and %s"%
               (self.pin_index, pin_fnc_num, self.pin_fnc[pin_fnc_num], pin_fnc_desc))
    else:
        self.pin_fnc[pin_fnc_num] = pin_fnc_desc
        if pin_fnc_c is None:
          pin_fnc_c = pin_fnc_desc
        pin_fnc_c = pin_fnc_c.replace('[', '_')
        pin_fnc_c = pin_fnc_c.replace(']', '_')
        pin_fnc_c = pin_fnc_c.rstrip('_')
        self.pin_fnc_c[pin_fnc_num] = pin_fnc_c
  def show(self):
    pad = '?'
    if self.pin_pad is not None:
      pad = self.pin_pad
    print("PIN %3d: MMR%d pos %d pad %s"%(self.pin_index, self.mmr_number, self.mmr_pos, pad))
    for fnc_num in self.pin_fnc:
      print("  %d: %s"%(fnc_num, self.pin_fnc[fnc_num]))
  def update_connections(self, chip_pins = None):
    if self.pin_pad is not None:
      pad_prefix = "TMS570_BALL_%s"%(self.pin_pad)
    else:
      pad_prefix = "TMS570_MMR_SELECT"
    for fnc in self.pin_fnc_c.keys():
      fnc_desc = self.pin_fnc_c[fnc]
      pin_define = "%s_%s"%(pad_prefix, fnc_desc)
      self.pin_defines[fnc] = pin_define
      if chip_pins is not None:
        pin_fnc_c = self.pin_fnc_c[fnc]
        if pin_fnc_c not in chip_pins.fnc_list.keys():
          chip_pins.fnc_list[pin_fnc_c] = []
        chip_pins.fnc_list[pin_fnc_c].append((pin, pin_define))
  def gen_header_def(self, fout):
    pad_mmr_spec = "TMS570_BALL_WITH_MMR(%d, %d)"%(self.mmr_number, self.mmr_pos)
    if self.pin_pad is not None:
      pad_prefix = "TMS570_BALL_%s"%(self.pin_pad)
      fout.write("\n#define %s %s\n"%(pad_prefix, pad_mmr_spec))
      pad_mmr_spec = pad_prefix
    else:
      fout.write("\n")
    fncs = sorted(self.pin_fnc_c.keys())
    for fnc in fncs:
      fout.write("#define %s TMS570_PIN_AND_FNC(%s, %d)\n"%
                 (self.pin_defines[fnc], pad_mmr_spec, fnc))

class chip_pins_desc(object):
  def __init__(self, chip_name = None, chip_package = None):
    self.pins = {}
    self.fnc_list = {}
  def pin_desc_for_index(self, pin_index, mmr_number = None, mmr_pos = None, pin_pad = None):
    pin_index = int(pin_index)
    if mmr_number is not None:
      mmr_number = int(mmr_number)
    if mmr_pos is not None:
      mmr_pos = int(mmr_pos)
    if pin_index in self.pins:
      pin = self.pins[pin_index]
      if mmr_number is not None:
        if pin.mmr_number is None:
          pin.mmr_number = mmr_number
        else:
          if pin.mmr_number != mmr_number:
            print("PIN %d mitmatch in MMR number %d %d"%(pin.pin_index, pin.mmr_number, mmr_number))
      if mmr_pos is not None:
        if pin.mmr_pos is None:
          pin.mmr_pos = mmr_pos
        else:
          if pin.mmr_pos != mmr_pos:
            print("PIN %d mitmatch in MMR number %d %d"%(pin.pin_index, pin.mmr_pos, mmr_pos))
    else:
      self.pins[pin_index] = chip_pin_desc(pin_index, mmr_number, mmr_pos)
      pin = self.pins[pin_index]
    return pin
  def show(self):
    print("List of functions found per pin")
    for pin in self.pins.values():
      pin.show()
    print("List of pins connected to functions")
    functions = sorted(self.fnc_list.keys())
    for fnc in functions:
      print("Function %s"%fnc)
      for tp in self.fnc_list[fnc]:
        print("   %s"%(tp[1]))
  def update_connections(self):
    for pin in self.pins.values():
      pin.update_connections(self)
  def gen_header_def(self, fout):
    plist = sorted(self.pins.keys())
    for pidx in plist:
      pin = self.pins[pidx]
      pin.gen_header_def(fout)

if __name__ == '__main__':

  iom_in_fname = 'tms570ls3137-terminals-iom.txt'
  pads_in_fname = 'tms570ls3137-terminals-pads.txt'
  fout = sys.stdout

  chip_pins = chip_pins_desc()

  re_parse_mmr = re.compile('PINMMR([0-9]+)\[([0-9]+)\]')
  re_normalize_brackets = re.compile('\[0+([0-9]+)\]')

  for line in open(iom_in_fname, 'r'):
    words = line.split()

    pin_fnc = ''
    for word in words:
      mmr_loc = re_parse_mmr.match(word)
      if mmr_loc is not None:
        if pin_fnc != 'RESERVED':
          #print("PINMMR%s bit %s fnction %s"%(mmr_loc.group(1), mmr_loc.group(2), pin_fnc))
          mmr_number = int(mmr_loc.group(1))
          mmr_bit = int(mmr_loc.group(2))
          mmr_pos = mmr_bit // 8
          pin_index = mmr_number * 4 + mmr_pos
          pin_fnc_num = mmr_bit % 8
          pin = chip_pins.pin_desc_for_index(pin_index, mmr_number, mmr_pos)
          pin_fnc_c = pin_fnc
          if len(pin_fnc_c) >= len('N2HET'):
            if pin_fnc_c[0:len('N2HET')] == 'N2HET':
              pin_fnc_c = pin_fnc_c[2:]
              # Ensure that C name specifies signal number with two digits
              l = len(pin_fnc_c)
              if (pin_fnc_c[l-1] == ']') and (pin_fnc_c[l-3] == '['):
                pin_fnc_c = pin_fnc_c[0:l-2] + '0' + pin_fnc_c[l-2:]
          # the label on pin on the pakage is without leading zeros in brackets
          # TRM manual specifies names with leading zeros and same is in Ti headers
          pin_fnc = re_normalize_brackets.sub('[\g<1>]', pin_fnc)
          pin.add_pin_fnc(pin_fnc_num, pin_fnc, pin_fnc_c)
        pin_fnc = ''
      else:
        pin_fnc = word

  for pin in chip_pins.pins.values():
    pin.match_level = 0

  re_ball_id = re.compile('^[A-Z][0-9]+$')
  pin_match = None
  max_match = 0
  for line in open(pads_in_fname, 'r'):
    words = line.split()
    for word in words:
      if re_ball_id.match(word) is not None:
        if pin_match is None:
          print("No pin found for candidate %s"%(word))
        else:
          if pin_match.pin_pad is None:
            print("PIN %d set to %s match %d"%(pin_match.pin_index, word, max_match))
            pin_match.pin_pad = word
            pin_match.match_level = max_match
          else:
            if pin_match.pin_pad != word:
              print("PIN %d conflict in pad %s and %s"%
                    (pin_match.pin_index, pin_match.pin_pad, word))
              if max_match > pin_match.match_level:
                print("PIN %d match %d > %d forcing pad %s to %s"%
                      (pin_match.pin_index, max_match, pin_match.match_level, pin_match.pin_pad, word))
                pin_match.pin_pad = word
                pin_match.match_level = max_match
            else:
              print("Already known")
        pin_match = None
        max_match = 0
        continue
      fnc_list = word.split('/')
      if len(fnc_list) == 0:
        continue
      print fnc_list
      alt_fnc_list = [''] * len(fnc_list)
      alt_used = False
      for i in range(0, len(fnc_list)):
        fnc = fnc_list[i]
        if len(fnc) < 4:
          continue
        if fnc[len(fnc)-3:len(fnc)] != '[0]':
          continue
        alt_fnc_list[i] = fnc[0:len(fnc)-3]
        alt_used = True
      if alt_used:
        print alt_fnc_list
      for pin in chip_pins.pins.values():
        act_match = 0
        for fnc in pin.pin_fnc:
           if pin.pin_fnc[fnc] in fnc_list:
             if fnc == 0:
               if pin.pin_fnc[fnc] == fnc_list[0]:
                 act_match += 30
               else:
                 act_match -= 10
             else:
               if pin.pin_fnc[fnc] != fnc_list[0]:
                 act_match += 10
               else:
                 act_match -= 10
           elif alt_used and (pin.pin_fnc[fnc] in alt_fnc_list):
             if fnc == 0:
               if pin.pin_fnc[fnc] == alt_fnc_list[0]:
                 act_match += 20
               else:
                 act_match -= 10
             else:
               if pin.pin_fnc[fnc] != alt_fnc_list[0]:
                 act_match += 10
               else:
                 act_match -= 10
        if (act_match >= max_match) and (act_match > 0):
          max_match = act_match
          pin_match = pin

  chip_pins.update_connections()
  chip_pins.show()
  chip_pins.gen_header_def(fout)


  fout.write("\n/* Default pinmux select */\n")
  fout.write("\n#define TMS570_PINMMR_DEFAULT_INIT_LIST(per_pin_action, common_arg) \\\n")
  plist = sorted(chip_pins.pins.keys())
  for pidx in plist:
    pin = chip_pins.pins[pidx]
    if 0 in pin.pin_defines:
      pin.pin_defines[0]
      fout.write("  per_pin_action(common_arg, %s) \\\n"%(pin.pin_defines[0]))
  fout.write("\n/* End of default PINMMR list */\n\n")
