# -*- coding: utf-8 -*-
import re
import sys
import codecs
import msvcrt
import json

class MCU(object):
    def __init__(self,name, pdf,author,peripherals):
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
        return Register(obj['name'], obj['info'],obj['lenght'], obj['adress'], None, obj['fields'],None,None,None)
    elif 'registers' in obj:
        return Peripheral(obj['name'], obj['full name'],obj['offset'],obj['registers'])
    elif 'peripherals' in obj:
        return MCU(obj['name'], obj['name'],obj['pdf'],obj['peripherals'])
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

def printInclude(file):    
    print ('#include <bsp/'+file+'.h>')
    #print ('#include "'+file+'.h"')

def printAdress(file):    
    data = json.loads(codecs.open(file, "r", "utf-8").read(), object_hook=object_decoder)
    for p in data.peripherals:
        for index,adr in enumerate(p.offset):
            name = data.name.upper()+'_'+p.name.upper()
            structName = data.name+'_'+p.name.lower()+"_t"
            adress = adr
            if(len(p.offset)>1):
                name += str(index+1)
            if(adr == "REAL"):
                return
            print("#define "+name+" (*(volatile "+structName+'*)'+adress+')')
    
import getopt,os

inputfile = ''
outputfile = ''
directory = os.path.dirname(os.path.realpath(__file__))
directory = directory.replace("\\python", "")
hdir = ""
files = ""
licence = ""
try:
      opts, args = getopt.getopt(sys.argv[1:],"hd:f:l:")
except getopt.GetoptError:
      print ('test.py -i <inputDir>')
      sys.exit(2)
for opt, arg in opts:
      if opt == '-h':
         print ('test.py -d <inputDir> -f <filesNames separated by space>' )
         sys.exit()
      elif opt in ("-d"):
         hdir = arg
      elif opt in ("-f"):
         files = arg.split()         
      elif opt in ("-l"):
         licence = codecs.open(arg, "r", "utf-8").readlines()
if(hdir == "" or files == ""):
    print ('Invalid argument' )
    sys.exit()

    
        


name = json.loads(codecs.open(os.path.join(hdir,files[0]+'.json'), "r", "utf-8").read(), object_hook=object_decoder).name
    
for line in licence:
    print(line.replace("\r\n", ""))
print ("")
print ("#ifndef LIBBSP_ARM_"+name.upper())
print ("#define LIBBSP_ARM_"+name.upper())
print ("")    

for file in files:    
    printInclude(file)
print("")
for file in files:    
    printAdress(os.path.join(hdir,file)+".json")    
print ("#endif /* LIBBSP_ARM_"+name.upper()+' */')

#jason = json.loads(codecs.open(inputfile, "r", "utf-8").read(), object_hook=object_decoder)
