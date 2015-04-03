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
    def __init__(self, name, info,lenght, adress,offset,fields,array):
        self.name = name
        self.info = info
        self.lenght = lenght
        self.adress = adress
        self.offset = offset
        self.fields = fields
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
        if('array' in obj):
            temporal_array = obj['array']        
        return Register(obj['name'], obj['info'],obj['lenght'], obj['adress'], obj['offset'], obj['fields'],temporal_array)
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

def findIdWithLowestAdressFrom(data,adress):
    minimum = int('0xFFFFFFFF', 16)
    adress = '0x'+adress.replace(" ","")
    indexOfMin = 0
    for i, val in enumerate(data.peripherals[0].registers):
        hodnota = '0x'+val.adress.replace(" ","")
        #print('0x'+val.adress +' , '+ val.adress)
        if(int(hodnota, 16) > int(adress,16) and int(hodnota, 16) < minimum):
            minimum = int('0x'+val.adress.replace(" ",""), 16)
            indexOfMin = i    
    return indexOfMin

def findIdWithLowestOffsetFrom(data,adress):
    minimum = int('0xFFFFFFFF', 16)
    adress = '0x'+adress
    indexOfMin = 0
    for i, val in enumerate(data.peripherals[0].registers):
        hodnota = '0x'+val.offset
        #print('0x'+val.adress +' , '+ val.adress)
        if(int(hodnota, 16) > int(adress,16) and int(hodnota, 16) < minimum):
            minimum = int('0x'+val.offset, 16)
            indexOfMin = i    
    return indexOfMin

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
    return '  ui32_t reserved' + str(reservedID) + ' [' + str(rozdil) + '];' #\n    
    
lastAdress = 0
def printIdAdress(data,regId):
    global lastAdress
    reserved = ''
    if(lastAdress == 0):
        lastAdress = int(data.peripherals[0].registers[regId].adress.replace(" ",""),16)
    if(lastAdress != int(data.peripherals[0].registers[regId].adress.replace(" ",""),16)):
        reserved = makeReserved(lastAdress,int(data.peripherals[0].registers[regId].adress.replace(" ",""),16))    
    if(data.peripherals[0].registers[regId].lenght == '32'):
        regType = 'ui32_t '
    lastAdress = int(data.peripherals[0].registers[regId].adress.replace(" ",""),16)+int(int(data.peripherals[0].registers[regId].lenght)/8)
    regName = data.peripherals[0].registers[regId].name
    info = data.peripherals[0].registers[regId].info    
    prefix = '  '+regType+regName+';'
    if(reserved != ''):
        print(reserved)        
    print(fillBlanks(prefix)+'/*'+info+'*/')
    
def printIdOffset(data,regId):
    global lastAdress
    reserved = ''
    if(lastAdress == 0):
        lastAdress = int(data.peripherals[0].registers[regId].offset,16)
    if(lastAdress != int(data.peripherals[0].registers[regId].offset,16)):
        reserved = makeReserved(lastAdress,int(data.peripherals[0].registers[regId].offset,16))
    lastAdress = int(data.peripherals[0].registers[regId].offset,16)+int(int(data.peripherals[0].registers[regId].lenght)/8)*int(data.peripherals[0].registers[regId].array)
        
    if(data.peripherals[0].registers[regId].lenght == '32'):
        regType = 'uint32_t '

    regName = data.peripherals[0].registers[regId].name
    if(int(data.peripherals[0].registers[regId].array) > 1):
        regName += '['+data.peripherals[0].registers[regId].array+']'
        
    
    info = data.peripherals[0].registers[regId].info    
    prefix = '  '+regType+regName+';'
    if(reserved != ''):
        print(reserved)        
    print(fillBlanks(prefix)+'/*'+info+'*/')
    

def makeStruct(data):
    print ('typedef struct{')
    if(data.peripherals[0].registers[0].adress != '0'):
        #adress mode
        adress = '0'
        for i in range(0,len(data.peripherals[0].registers)) :
            regId = findIdWithLowestAdressFrom(data,adress)
            adress = data.peripherals[0].registers[regId].adress
            printIdAdress(data,regId)
        print ('} '+data.peripherals[0].name+"_struct;")
    else:
        #offset mode
        adress = 'FFFFFFFF'
        for i in range(0,len(data.peripherals[0].registers)) :
            regId = findIdWithLowestOffsetFrom(data,adress)
            adress = data.peripherals[0].registers[regId].offset
            printIdOffset(data,regId)
        print ('} '+data.peripherals[0].name+"_struct;")
        

def makeFirstLine(reg,prefix):
    block = ''
    spaceCount = int((60-len(reg.name)-len(prefix))/2)
    for i in range(0,spaceCount):
        block += '-'
    block += prefix+reg.name
    for i in range(0,spaceCount):
        block += '-'
    return "/*"+block+"*/"

def makeBlock(reg,prefix):
    block = ''
    
    for i in range(0,len(reg.fields)):
        fieldName = reg.fields[i].bit_Field_Name.replace(" ", "_")
        lenght = int(reg.fields[i].lenght)
        block += '/* field: '+fieldName + ' - '+reg.fields[i].info+' */\n'
        if (lenght != 1):
            block += "#define "+prefix+'_'+reg.name+'_'+fieldName+'(val) BSP_FLD32(val,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += "#define "+prefix+'_'+reg.name+'_'+fieldName+'_GET(reg) BSP_FLD32GET(reg,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += "#define "+prefix+'_'+reg.name+'_'+fieldName+'_SET(reg,val) BSP_FLD32SET(reg, val,'+reg.fields[i].start_bit+', '+str(int(reg.fields[i].start_bit)+lenght-1)+')\n'
            block += '\n'
        else:
            block += "#define "+prefix+'_'+reg.name+'_'+fieldName+' BSP_FLD32('+reg.fields[i].start_bit+')\n'
            block += '\n'
    return block

def makeRegs(data):
    prefix = data.name + '_' + data.peripherals[0].name
    #for i in range(0,len(data.peripherals[0].registers)) :
    if(data.peripherals[0].registers[0].adress != '0'):
        #adress mode
        adress = '0'
        for i in range(0,len(data.peripherals[0].registers)) :
            regId = findIdWithLowestAdressFrom(data,adress)
            adress = data.peripherals[0].registers[regId].adress
            print(makeFirstLine(data.peripherals[0].registers[regId],prefix))
            print(makeBlock(data.peripherals[0].registers[regId],prefix))            
    else:
        #offset mode
        adress = 'FFFFFFFF'
        for i in range(0,len(data.peripherals[0].registers)) :
            regId = findIdWithLowestOffsetFrom(data,adress)
            adress = data.peripherals[0].registers[regId].offset
            print(makeFirstLine(data.peripherals[0].registers[regId],prefix))
            print(makeBlock(data.peripherals[0].registers[regId],prefix))
        
        

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
#print(nacetlo.peripherals[0].registers[0].fields[0].start_bit)
makeFile(nacetlo)
print("")
makeStruct(nacetlo)
print("")
makeRegs(nacetlo)
print("")
print ("#endif /* LIBBSP_ARM_"+nacetlo.name+'_'+nacetlo.peripherals[0].name+'.H */')

#print (nacetlo[0].fields[0].bit_number)

