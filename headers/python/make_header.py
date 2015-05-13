# -*- coding: utf-8 -*-
import re
import sys
import codecs
import msvcrt
import json

class MCU(object):
    def __init__(self,name, peripherals):
        self.name = name
        self.peripherals = peripherals        

class Peripheral(object):
    def __init__(self,name,registers):
        self.name = name
        self.registers = registers

class Register(object):
    def __init__(self, name, info,lenght, adress,fields,array,temporal_group_pos,temporal_group_name):
        self.name = name
        self.info = info
        self.lenght = int(lenght)
        self.adress = int(adress,16)
        self.fields = fields
        self.group_pos = None
        if(temporal_group_pos != None):
            self.group_pos = temporal_group_pos
            for i,number in enumerate(temporal_group_pos):
                self.group_pos[i] = int(number,16)                
        self.group_name = temporal_group_name
        self.group_name_actual = None
        self.used = 0
        if(array != None):
            self.array = int(array)
        else:
            self.array = 1
        prepareReg(self)

class Fields(object):
    def __init__(self, start_bit, bit_lenght, bit_Field_Name, info,values):
        self.start_bit = start_bit
        self.lenght = bit_lenght
        self.bit_Field_Name = bit_Field_Name
        self.info = info
        self.values = values
        
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
        return Register(obj['name'], obj['info'],obj['lenght'], obj['adress'], obj['fields'],temporal_array,temporal_group_pos,temporal_group_name)
    elif 'bit_Field_Name' in obj:
        temporal_values = None        
        if('values' in obj):
            temporal_values = obj['values']        
        return Fields(obj['start_bit'], obj['bit_lenght'], obj['bit_Field_Name'], obj['info'],temporal_values)            
        #return Fields(obj['bit_position'], obj['lenght'], obj['bit_Field_Name'], obj['info'], obj['values'])
    elif 'registers' in obj:
        return Peripheral(obj['name'], obj['registers'])
    elif 'peripherals' in obj:
        return MCU(obj['name'], obj['peripherals'])
    else:
        return obj

def makeFile( loaded_jason ):
    global licence
    for line in licence:
        print(line.replace("\r\n", ""))
    print ("#ifndef LIBBSP_ARM_"+loaded_jason.name+'_'+loaded_jason.peripherals[0].name)
    print ("#define LIBBSP_ARM_"+loaded_jason.name+'_'+loaded_jason.peripherals[0].name)
    print ("")
    print ("#include <bsp/utility.h>")

def findLowestAdress(data):
    last = 0
    minimum = None
    minimum_value = int("0xFFFFFFFF",16)
    for val in data.registers:        
        #prepareReg(val)
        if(val.used != 0):
            continue        
        if(val.adress < minimum_value):
            minimum = val
            minimum_value = val.adress    
    return minimum

def fillBlanks(string):
    for i in range(0,30-len(string)) :
        string+=' '
    return string    

reservedID = 0
def makeReserved(prevAdress, nextAdress):
    global reservedID
    rozdil = nextAdress - prevAdress
    string = ''
    reservedID += 1
    return '  uint8_t reserved' + str(reservedID) + ' [' + str(rozdil) + '];' #\n    
    
lastAdress = 0
def printRegInfo(reg):
    global lastAdress
    reserved = ''
    
    if(lastAdress == 0):
        lastAdress = reg.adress
    
    if(lastAdress != reg.adress):
      reserved = makeReserved(lastAdress,reg.adress)    
    lastAdress = reg.adress+int((reg.lenght/8*reg.array))
        
    if(reg.lenght == 32):
        regType = 'uint32_t '
        
    regName = reg.name
    if(int(reg.array) > 1):
        regName += '['+str(reg.array)+']'
    
    info = '/*'+reg.info+'*/'    
    prefix = '  '+regType+regName+';'

    if(reg.group_name_actual != None):
        info = info.replace('{}',reg.group_name_actual)
        prefix = prefix.replace('{}',reg.group_name_actual) 
    
    if(reserved != ''):
        print(reserved)        
    print(fillBlanks(prefix)+info)

def countRegs(data):
    count = 0
    for reg in data.peripherals[0].registers:
        if(reg.group_pos != None):
            count += len(reg.group_pos)
        else:
            count += 1
    return count

def makeStruct(data):
    for r in data.peripherals[0].registers:
        prepareReg(r)
    numberOfRegs = countRegs(data)    
    print ('typedef struct{')        
    for i in range(0,numberOfRegs):
        #print(data.peripherals[0].registers[0].used)
        reg = findLowestAdress(data.peripherals[0])
        printRegInfo(reg)
        makeRegUsed(reg)
        prepareReg(reg)
        
    print ('} '+data.name+'_'+data.peripherals[0].name.lower()+"_t;")    

def makeFirstLine(reg,prefix):
    block = prefix+reg.name
    if(reg.group_name_actual != None):
        block = block.replace('{}',reg.group_name_actual)
        
    spaceCount = int((60-len(block))/2)
    for i in range(0,spaceCount):
        block = '-'+block            
        block += '-'     
    return "/*"+block+"*/"

def makeBlock(reg,prefix):
    block = ''
    
    for i in range(0,len(reg.fields)):
        fieldName = reg.fields[i].bit_Field_Name.replace(" ", "_")
        lenght = int(reg.fields[i].lenght)
        block += '/* field: '+fieldName + ' - '+reg.fields[i].info+' */\n'
        macroName = prefix+reg.name+'_'+fieldName
        #peripheral = prefix.split('_')[-2]
        #sys.stderr.write(peripheral+'\n')
        #sys.stderr.write(reg.name+'\n\n')
        #if(reg.name.find(peripheral) != -1):
        #    macroName = prefix+reg.name+'_'+fieldName
        #else:
        #    macroName = prefix+reg.name.replace(peripheral,"")+'_'+fieldName
        #if(len(macroName)>27):
        #    macroName = prefix+reg.name[:5]+'_'+fieldName
        
        if (lenght != 1):
            block += "#define "+macroName+'(val) BSP_FLD32(val,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += "#define "+macroName+'_GET(reg) BSP_FLD32GET(reg,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += "#define "+macroName+'_SET(reg,val) BSP_FLD32SET(reg, val,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += '\n'
        else:
            block += "#define "+macroName+' BSP_FLD32('+reg.fields[i].start_bit+')\n'
            block += '\n'

    if(reg.group_name_actual != None):
        block = block.replace('{}',reg.group_name_actual)    
    return block

def makeRegUsed(reg):
    if(reg.group_pos != None):
        if(len(reg.group_pos)>1):
            index = reg.group_name.index(reg.group_name_actual)
            reg.group_name.remove(reg.group_name_actual)            
            reg.group_pos.remove(reg.group_pos[index])
            return
    reg.used = 1

def prepareReg(reg):
    if(reg.group_pos != None):
        if(len(reg.group_name) > 0):
            indexOfMin = 0
            minimum = sys.maxsize
            indexOfMin = 0
            for i,val in enumerate(reg.group_pos):
                if(val < minimum):
                    minimum = val
                    indexOfMin = i    
            reg.group_name_actual = reg.group_name[indexOfMin]        
            reg.adress = reg.group_pos[indexOfMin]
            
        else:
            reg.adress = sys.maxsize
            

def makeRegs(data):
    #prefix = data.name.upper() + '_' + data.peripherals[0].name+'_'
    prefix = data.name.upper() + '_'
    numberOfRegs = countRegs(data)                
    for i in range(0,numberOfRegs):
        reg = findLowestAdress(data.peripherals[0])
        if(reg == None):
            return
        print(makeFirstLine(reg,prefix))
        print(makeBlock(reg,prefix))
        reg.used = 1

import getopt,os
inputfile = ''
outputfile = ''
licence = ''
def main(argv):

   global inputfile
   global outputfile
   global licence
   try:
      opts, args = getopt.getopt(argv,"hi:l:",["ifile=","ofile=","lfile="])
   except getopt.GetoptError:
      print ('needed -i <inputfile> -o <outputfile> -l <licencefile>')
      sys.exit(2)
   for opt, arg in opts:
      if opt == '-h':
         print ('test.py -i <inputfile> -o <outputfile> -l <licencefile>')
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = arg
         #inputfile = arg
      elif opt in ("-l", "--ifile"):
         licence = codecs.open(arg, "r", "utf-8").readlines()
         #inputfile = arg
      

if __name__ == "__main__":
   main(sys.argv[1:])
    
exit
    
jason = codecs.open(inputfile, "r", "utf-8").read()

nacetlo = json.loads(jason, object_hook=object_decoder)

makeFile(nacetlo)
print("")
makeStruct(nacetlo)
print("")
nacetlo = json.loads(jason, object_hook=object_decoder)
makeRegs(nacetlo)
print("")
print ("#endif /* LIBBSP_ARM_"+nacetlo.name+'_'+nacetlo.peripherals[0].name+' */')


#print (nacetlo[0].fields[0].bit_number)

