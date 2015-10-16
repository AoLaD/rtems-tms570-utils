# -*- coding: utf-8 -*-
import re
import sys
import codecs
#import msvcrt
import json

class MCU(object):
    def __init__(self,author, name,pdf,peripherals):
        self.name = name
        self.pdf = pdf
        self.author = author
        self.peripherals = peripherals

class Peripheral(object):
    def __init__(self,name,full_name,offset,sulf,registers):
        self.name = name
        self.registers = registers
        self.full_name = full_name
        self.offset = offset
        self.sulf = sulf
        self.used = 0

class Register(object):
    def __init__(self, name, info,lenght, adress,offset,fields,array,reg_type,group_pos,group_name):
        self.name = name
        self.info = info
        self.lenght = lenght
        self.adress = adress
        self.offset = offset
        self.fields = fields
        self.group_pos = group_pos
        self.group_name = group_name
        self.group_name_actual = None
        self.reg_type = reg_type
        self.array = array
        self.used = 0

class Fields(object):
    def __init__(self, start_bit, bit_lenght, bit_Field_Name, info,values):
        self.start_bit = start_bit
        self.lenght = bit_lenght
        self.bit_Field_Name = bit_Field_Name
        self.info = info
        self.values = values
        self.used = 0

import json
def object_decoder(obj):
    if 'adress' in obj:
        temporal_array = None
        temporal_group_pos = None
        temporal_group_name = None
        temporal_fields = None
        temporal_type = None
        if('array' in obj):
            temporal_array = obj['array']
        if('group_position' in obj):
            temporal_group_pos = obj['group_position']
        if('group_names' in obj):
            temporal_group_name = obj['group_names']
        if('fields' in obj):
            temporal_fields = obj['fields']
        if('type' in obj):
            temporal_type = obj['type']
        return Register(obj['name'], obj['info'],obj['lenght'], obj['adress'], obj['offset'], temporal_fields,temporal_array,temporal_type, temporal_group_pos,temporal_group_name)
    elif 'bit_Field_Name' in obj:
        temporal_values = None
        if('values' in obj):
            temporal_values = obj['values']
        return Fields(obj['bit_number'], None, obj['bit_Field_Name'], obj['info'],temporal_values)
    elif 'registers' in obj:
        sulf = None
        if('sulfixes' in obj):
            sulf = obj['sulfixes']
        return Peripheral(obj['name'], obj['full name'],obj['offset'],sulf,obj['registers'])
    elif 'peripherals' in obj:
        return MCU(obj['author'], obj['name'],obj['pdf'],obj['peripherals'])
    else:
        return obj

def spaces(num):
      string = ""
      for i in range(1, num):
            string += " "
      return string

def listToString(l):
    ret = "["
    for s in l:
        ret += '"'+s+'", '
    return ret[0:-2]+']'

def printAll(hout, obj):
      hout.write(spaces(0)+"{\n")
      hout.write(spaces(2)+'"author" : "'+obj.author+'",\n')
      hout.write(spaces(2)+'"pdf" : "'+obj.pdf+'",\n')
      hout.write(spaces(2)+"\"name\" : \""+obj.name+"\",\n")
      hout.write(spaces(2)+"\"this_file_copyright_type\" : \"BSD 2-Clause\",\n")
      hout.write(spaces(2)+"\"this_file_copyright_url\" : \"https://github.com/AoLaD/rtems-tms570-utils/blob/master/headers/prepared_files/licence.txt\",\n")
      hout.write(spaces(2)+"\"peripherals\" : [\n")
      for indexP,p in enumerate(obj.peripherals):
            hout.write(spaces(4)+"{\n")
            hout.write(spaces(6)+"\"name\" : \""+p.name+"\",\n")
            hout.write(spaces(6)+'"full name" : "'+p.full_name+'",\n')
            hout.write(spaces(6)+'"offset" : '+listToString(p.offset)+',\n')
            if(p.sulf != None):
                hout.write(spaces(6)+'"sulfixes" : '+listToString(p.sulf)+',\n')
            hout.write(spaces(6)+"\"registers\" : [\n")
            for indexR,r in enumerate(p.registers):
                  hout.write(spaces(8)+"{\n")
                  hout.write(spaces(8)+"\"name\" : \""+r.name+"\",\n")
                  hout.write(spaces(8)+"\"info\" : \""+r.info+"\",\n")
                  hout.write(spaces(8)+"\"lenght\" : \""+r.lenght+"\",\n")
                  hout.write(spaces(8)+"\"adress\" : \""+r.adress+"\",\n")
                  if(r.group_pos != None):
                        hout.write(spaces(8)+"\"group_position\" : "+listToString(r.group_pos)+",\n")
                  if(r.group_name != None):
                        hout.write(spaces(8)+"\"group_names\" : "+listToString(r.group_name)+",\n")
                  if(r.array != None):
                        hout.write(spaces(8)+"\"array\" : \""+str(r.array)+"\",\n")
                  if(r.reg_type != None):
                        hout.write(spaces(8)+"\"type\" : \""+str(r.reg_type)+"\",\n")
                  hout.write(spaces(8)+"\"fields\" : [\n")
                  if(r.fields != None):
                      for indexF,f in enumerate(r.fields):
                            hout.write(spaces(10)+"{\n")
                            hout.write(spaces(10)+"\"start_bit\" : \""+f.start_bit+"\",\n")
                            hout.write(spaces(10)+"\"bit_lenght\" : \""+f.lenght+"\",\n")
                            hout.write(spaces(10)+"\"bit_Field_Name\" : \""+f.bit_Field_Name+"\",\n")
                            hout.write(spaces(10)+"\"info\" : \""+f.info+"\"\n")
                            if(indexF==len(r.fields)-1):
                                  hout.write(spaces(10)+"}\n")
                            else:
                                  hout.write(spaces(10)+"},\n")
                  hout.write(spaces(9)+"]\n")
                  if(indexR==len(p.registers)-1):
                        hout.write(spaces(8)+"}\n")
                  else:
                        hout.write(spaces(8)+"},\n")
            hout.write(spaces(6)+"]\n")
            if(indexP==len(obj.peripherals)-1):
                  hout.write(spaces(4)+"}\n")
            else:
                  hout.write(spaces(4)+"},\n")
      hout.write(spaces(2)+"]\n")
      hout.write(spaces(0)+"}\n")

import re
def eraseBracket(string):
    string = string.replace('[', "(")
    string = string.replace(']', ")")
    #sys.stderr.write(string+'\n')
    return re.sub("\((.*)\)", '', string)

def refactor_field(f):
      f.bit_Field_Name = eraseBracket(f.bit_Field_Name)
      #sys.stderr.write(f.bit_Field_Name+'\n')
      f.bit_Field_Name = f.bit_Field_Name.replace(' ', "_")
      f.bit_Field_Name = f.bit_Field_Name.replace('-', "_")
      f.bit_Field_Name = f.bit_Field_Name.replace('/', "_")
      if(f.start_bit.find('-') != -1):
        numbers = f.start_bit.split('-')
        f.start_bit = str(min(int(numbers[0]),int(numbers[1])))
        f.lenght = str(abs(int(numbers[0])-int(numbers[1]))+1)
      else:
        f.lenght = "1"
      if(f.info.rfind('.') != -1):
        f.info = f.info[0:f.info.rfind('.')+1]

def refactor_reg(r):
      r.name = r.name.replace(" ", "_")
      r.adress = r.adress.replace("h", "")
      r.adress = r.adress.replace(" ", "")
      r.offset = r.offset.replace("h", "")
      r.adress = hex(max(int(r.offset,16),int(r.adress,16)))
      if(r.group_pos != None):
        for i in range(0,len(r.group_pos)):
              r.group_pos[i] = '0x'+r.group_pos[i]



def refactor_perip(p):
      exit

def refactor(obj):
      for p in obj.peripherals:
            for r in p.registers:
                  if(r.fields != None):
                      for f in r.fields:
                            refactor_field(f)
                  refactor_reg(r)
            refactor_perip(p)

import getopt,os
hhelp = 'test.py -i <inputfile> -o <outputfile>'
inputfile = ''
outputfile = ''
try:
      opts, args = getopt.getopt(sys.argv[1:],"hi:o:",["ifile="])
except getopt.GetoptError:
      print (hhelp)
      sys.exit(2)
for opt, arg in opts:
      if opt == '-h':
         print (hhelp)
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = arg
      elif opt in ("-o", "--ofile"):
         outputfile = arg
if(inputfile == '' or outputfile == ''):
      print(hhelp)
      sys.exit(2)

jason = json.loads(codecs.open(inputfile, "r", "utf-8").read(), object_hook=object_decoder)
refactor(jason)
hout = codecs.open(outputfile, "w", "utf-8")
printAll(hout,jason)
