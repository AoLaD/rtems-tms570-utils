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
    def __init__(self, name, info,lenght, adress,offset,fields,array,temporal_group_pos,temporal_group_name):
        self.name = name
        self.info = info
        self.lenght = lenght
        self.adress = adress
        self.offset = offset
        self.fields = fields
        self.group_pos = temporal_group_pos
        self.group_name = temporal_group_name
        self.group_name_actual = None
        if(array != None):
            self.array = array
        else:
            self.array = 1         

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
        return Register(obj['name'], obj['info'],obj['lenght'], obj['adress'], obj['offset'], obj['fields'],temporal_array,temporal_group_pos,temporal_group_name)
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
    print ("#ifndef LIBBSP_ARM_"+loaded_jason.name+'_'+loaded_jason.peripherals[0].name+'.H')
    print ("#define LIBBSP_ARM_"+loaded_jason.name+'_'+loaded_jason.peripherals[0].name+'.H')
    print ("")
    print ("#include <bsp/utility.h>")

def findClosestRegister(data, register):
    last = 0
    minimum = register
    local_min = int("0xFFFFFFFF", 16)
    if(register.adress != '0'):
        #adress mode        
        last = register.adress.replace(" ","")    
    else:
        #offset mode
        last = register.offset.replace(" ","")

    for i, val in enumerate(data.peripherals[0].registers):
        prepareReg(val)
        if(register.adress != '0'):
            hodnota = '0x'+val.adress.replace(" ","")            
        else:
            hodnota = '0x'+val.offset.replace(" ","")            
        if(int(hodnota, 16) > int(last,16) and
           int(hodnota, 16) < local_min):
            minimum = val            
            if(register.adress != '0'):
                local_min = int('0x'+minimum.adress.replace(" ",""), 16)
            else:
                local_min = int('0x'+minimum.offset.replace(" ",""), 16)
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
    
    if(lastAdress == 0 and reg.adress != '0'):
        lastAdress = int(reg.adress.replace(" ",""),16)
    if(lastAdress == 0 and reg.adress == '0'):
        lastAdress = int(reg.offset.replace(" ",""),16)

    if(reg.adress != '0'):
        if(lastAdress != int(reg.adress.replace(" ",""),16)):
            reserved = makeReserved(lastAdress,int(reg.adress.replace(" ",""),16))    
        lastAdress = int(reg.adress.replace(" ",""),16)+int(int(reg.lenght)/8)*int(reg.array)
    else:
        if(lastAdress != int(reg.offset.replace(" ",""),16)):
            reserved = makeReserved(lastAdress,int(reg.offset.replace(" ",""),16))    
        lastAdress = int(reg.offset.replace(" ",""),16)+int(int(reg.lenght)/8)*int(reg.array)
        
    if(reg.lenght == '32'):
        regType = 'uint32_t '
        
    regName = reg.name
    if(int(reg.array) > 1):
        regName += '['+reg.array+']'
    
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

def makeEmptyReg(data):
    
    if(data.peripherals[0].registers[0].adress != '0'):
        sys.stderr.write("pleeee\n")            
        return Register("blaa", "bla","32", "-1", "-1", None,None,None,None)
    else:
        return Register("blaa", "bla","32", "-1", '0', None,None,None,None)
    

def makeStruct(data):
    for r in data.peripherals[0].registers:
        prepareReg(r)
    numberOfRegs = countRegs(data)    
    print ('typedef struct{')
    reg = makeEmptyReg(data)    
    for i in range(0,numberOfRegs):
        reg = findClosestRegister(data,reg)
        printRegInfo(reg)
        makeRegUsed(reg)
        
    print ('} '+data.peripherals[0].name+"_struct;")    

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
        if (lenght != 1):
            block += "#define "+prefix+reg.name+'_'+fieldName+'(val) BSP_FLD32(val,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += "#define "+prefix+reg.name+'_'+fieldName+'_GET(reg) BSP_FLD32GET(reg,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += "#define "+prefix+reg.name+'_'+fieldName+'_SET(reg,val) BSP_FLD32SET(reg, val,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += '\n'
        else:
            block += "#define "+prefix+reg.name+'_'+fieldName+' BSP_FLD32('+reg.fields[i].start_bit+')\n'
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

def prepareReg(reg):
    if(reg.group_pos != None):
        if(len(reg.group_name) > 0):
            indexOfMin = 0
            minimum = sys.maxsize
            for i in range(0,len(reg.group_pos)):                
                if(int(reg.group_pos[i], 16) < minimum):
                    minimum = int(reg.group_pos[i], 16)
                    indexOfMin = i
            reg.group_name_actual = reg.group_name[indexOfMin]        
            if(reg.adress != '0'):
                reg.adress = reg.group_pos[indexOfMin]
            else:
                reg.offset = reg.group_pos[indexOfMin]
        else:
            if(reg.adress != '0'):
                reg.adress = sys.maxsize                
            else:
                reg.offset = sys.maxsize

def makeRegs(data):
    prefix = data.name + '_' + data.peripherals[0].name+'_'
    numberOfRegs = countRegs(data)        
    reg = makeEmptyReg(data)    
    for i in range(0,numberOfRegs):
        reg = findClosestRegister(data,reg)
        print(makeFirstLine(reg,prefix))
        print(makeBlock(reg,prefix))
        makeRegUsed(reg)

import getopt,os
inputfile = ''
outputfile = ''
licence = ''
def main(argv):

   global inputfile
   global outputfile
   global licence
   directory = os.path.dirname(os.path.realpath(__file__))
   directory = directory.replace("\\python", "")
   try:
      opts, args = getopt.getopt(argv,"hi:o:l:",["ifile=","ofile=","lfile="])
   except getopt.GetoptError:
      print ('needed -i <inputfile> -o <outputfile> -l <licencefile>')
      sys.exit(2)
   for opt, arg in opts:
      if opt == '-h':
         print ('test.py -i <inputfile> -o <outputfile> -l <licencefile>')
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = directory+'\\prepared_files\\'+arg
         #inputfile = arg
      elif opt in ("-l", "--ifile"):
         licence = codecs.open(arg, "r", "utf-8").readlines()
         #inputfile = arg
      elif opt in ("-o", "--ofile"):
         outputfile = directory+'\\headers\\'+arg
         #outputfile = arg


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
print ("#endif /* LIBBSP_ARM_"+nacetlo.name+'_'+nacetlo.peripherals[0].name+'.H */')

#print (nacetlo[0].fields[0].bit_number)

