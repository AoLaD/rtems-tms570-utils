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
  def add_pin_fnc(self, pin_fnc_num, pin_fnc_desc):
    if pin_fnc_num in self.pin_fnc:
      if pin_fnc_desc != self.pin_fnc[pin_fnc_num]:
        printf("PIN %d fnction %d conflict %s and %s"%
               (self.pin_index, pin_fnc_num, self.pin_fnc[pin_fnc_num], pin_fnc_desc))
    else:
        self.pin_fnc[pin_fnc_num] = pin_fnc_desc
  def show(self):
    pad = '?'
    if self.pin_pad is not None:
      pad = self.pin_pad
    print("PIN %3d: MMR%d pos %d pad %s"%(self.pin_index, self.mmr_number, self.mmr_pos, pad))
    for fnc_num in self.pin_fnc:
      print("  %d: %s"%(fnc_num, self.pin_fnc[fnc_num]))
  def gen_header_def(self, fout):
    pad_prefix = "TMS570_BALL_%s"%(self.pin_pad)
    fout.write("\n#define %s TMS570_BALL_WITH_MMR(%d, %d)\n"%
               (pad_prefix, self.mmr_number, self.mmr_pos))
    fncs = sorted(self.pin_fnc.keys())
    for fnc in fncs:
      fnc_desc = self.pin_fnc[fnc]
      fnc_desc = fnc_desc.replace('[', '_')
      fnc_desc = fnc_desc.replace(']', '_')
      fnc_desc = fnc_desc.rstrip('_')
      fout.write("#define %s_%s TMS570_PIN_AND_FNC(%s, %d)\n"%
                 (pad_prefix, fnc_desc, pad_prefix, fnc))

class chip_pins_desc(object):
  def __init__(self, chip_name = None, chip_package = None):
    self.pins = {}
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
    for pin in self.pins.values():
      pin.show()
  def gen_header_def(self, fout):
    plist = sorted(self.pins.keys())
    for pidx in plist:
      pin = self.pins[pidx]
      if pin.pin_pad is not None:
        pin.gen_header_def(fout)

if __name__ == '__main__':

  iom_in_fname = 'tms570ls3137-terminals-iom.txt'
  pads_in_fname = 'tms570ls3137-terminals-pads.txt'

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
          pin_fnc = re_normalize_brackets.sub('[\g<1>]', pin_fnc)
          pin.add_pin_fnc(pin_fnc_num, pin_fnc)
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

  chip_pins.show()
  chip_pins.gen_header_def(sys.stdout)
