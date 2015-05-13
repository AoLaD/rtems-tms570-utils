# -*- coding: utf-8 -*-
import re
import sys
import codecs
import msvcrt
import json

class MCU(object):
    def __init__(self,author, name,pdf,peripherals):
        self.name = name
        self.pdf = pdf
        self.author = author
        self.peripherals = peripherals        

class Peripheral(object):
    def __init__(self,name,full_name,offset,registers):
        self.name = name
        self.registers = registers
        self.full_name = full_name
        self.offset = offset
        self.used = 0

class Register(object):
    def __init__(self, name, info,lenght, adress,offset,fields,array,group_pos,group_name):
        self.name = name
        self.info = info
        self.lenght = lenght
        self.adress = adress
        self.offset = offset
        self.fields = fields
        self.group_pos = group_pos
        self.group_name = group_name
        self.group_name_actual = None        
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
        if('array' in obj):
            temporal_array = obj['array']
        if('group_position' in obj):
            temporal_group_pos = obj['group_position']
        if('group_names' in obj):
            temporal_group_name = obj['group_names']
        return Register(obj['name'], obj['info'],obj['lenght'], obj['adress'], obj['offset'], obj['fields'],temporal_array,temporal_group_pos,temporal_group_name)
    elif 'bit_Field_Name' in obj:
        temporal_values = None        
        if('values' in obj):
            temporal_values = obj['values']        
        return Fields(obj['bit_number'], None, obj['bit_Field_Name'], obj['info'],temporal_values)                    
    elif 'registers' in obj:
        return Peripheral(obj['name'], obj['full name'],obj['offset'],obj['registers'])
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

def printAll(obj):
      print(spaces(0)+"{")
      print(spaces(2)+'"author" : "'+obj.author+'",')
      print(spaces(2)+'"pdf" : "'+obj.pdf+'",')
      print(spaces(2)+"\"name\" : \""+obj.name+"\",")
      print(spaces(2)+"\"peripherals\" : [")      
      for indexP,p in enumerate(obj.peripherals):
            print(spaces(4)+"{")
            print(spaces(6)+"\"name\" : \""+p.name+"\",")
            print(spaces(6)+'"full name" : "'+p.full_name+'",')
            print(spaces(6)+'"offset" : '+listToString(p.offset)+',')
            print(spaces(6)+"\"registers\" : [")            
            for indexR,r in enumerate(p.registers):
                  print(spaces(8)+"{")
                  print(spaces(8)+"\"name\" : \""+r.name+"\",")
                  print(spaces(8)+"\"info\" : \""+r.info+"\",")
                  print(spaces(8)+"\"lenght\" : \""+r.lenght+"\",")
                  print(spaces(8)+"\"adress\" : \""+r.adress+"\",")
                  if(r.group_pos != None):
                        print(spaces(8)+"\"group_position\" : "+listToString(r.group_pos)+",")
                  if(r.group_name != None):
                        print(spaces(8)+"\"group_names\" : "+listToString(r.group_name)+",")
                  if(r.array != None):
                        print(spaces(8)+"\"array\" : \""+str(r.array)+"\",")
                  print(spaces(8)+"\"fields\" : [")
                  for indexF,f in enumerate(r.fields):
                        print(spaces(10)+"{")
                        print(spaces(10)+"\"start_bit\" : \""+f.start_bit+"\",")
                        print(spaces(10)+"\"bit_lenght\" : \""+f.lenght+"\",")
                        print(spaces(10)+"\"bit_Field_Name\" : \""+f.bit_Field_Name+"\",")
                        print(spaces(10)+"\"info\" : \""+f.info+"\"")
                        if(indexF==len(r.fields)-1):
                              print(spaces(10)+"}")
                        else:
                              print(spaces(10)+"},")
                  print(spaces(9)+"]")
                  if(indexR==len(p.registers)-1):
                        print(spaces(8)+"}")
                  else:
                        print(spaces(8)+"},")
            print(spaces(6)+"]")
            if(indexP==len(obj.peripherals)-1):
                  print(spaces(4)+"}")
            else:
                  print(spaces(4)+"},")
      print(spaces(2)+"]")
      print(spaces(0)+"}")
      
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
                  for f in r.fields:
                        refactor_field(f)
                  refactor_reg(r)
            refactor_perip(p)
      
inputfile = ''

import getopt,os

inputfile = ''
outputfile = ''
directory = os.path.dirname(os.path.realpath(__file__))
directory = directory.replace("\\python", "")
try:
      opts, args = getopt.getopt(sys.argv[1:],"hi:",["ifile="])
except getopt.GetoptError:
      print ('test.py -i <inputfile>')
      sys.exit(2)
for opt, arg in opts:
      if opt == '-h':
         print ('test.py -i <inputfile>')
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = arg      

jason = json.loads(codecs.open(inputfile, "r", "utf-8").read(), object_hook=object_decoder)
refactor(jason)
printAll(jason)
