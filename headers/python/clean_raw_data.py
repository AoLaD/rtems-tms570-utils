# -*- coding: utf-8 -*-
import re
import sys
import codecs
import msvcrt
import json

inFile = ""
outFile = ""
result = ""
f = ""

import getopt,os


inputfile = ''
outputfile = ''
directory = os.path.dirname(os.path.realpath(__file__))
directory = directory.replace("\\python", "")
try:
      opts, args = getopt.getopt(sys.argv[1:],"hi:o:",["ifile=","ofile="])
except getopt.GetoptError:
      print ('test.py -i <inputfile> -o <outputfile>')
      sys.exit(2)
for opt, arg in opts:
      if opt == '-h':
         print ('test.py -i <inputfile> -o <outputfile>')
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = directory+'\\raw_files\\'+arg
         #inputfile = arg
      elif opt in ("-o", "--ofile"):
         outputfile = directory+'\\prepared_files\\'+arg
         #outputfile = arg
print ('Input file is ', inputfile)
print ('Output file is ', outputfile)
inFile = codecs.open(inputfile, "r", "utf-8").readlines()
f = open(outputfile, 'w')



for line in inFile:
    if(line.find('adress') != -1 and line.find('h') != -1) :
        outFile+='-'+line
        line = line.replace("h", "")
        outFile+='+' + line
        result+=line
        continue
    
    if(line.find('bit_number') != -1 and line.find('-') != -1 ):
        outFile+='-'+line        
        numbers = re.search('[0-9\-]+',line,flags=0).group(0).split('-')
        start = min(int(numbers[0]),int(numbers[1]))
        lenght = abs(int(numbers[0])-int(numbers[1]))+1
        outFile+='+' + "               \"start_bit\" : \""+str(start)+"\",\n"
        outFile+='+' + "               \"bit_lenght\" : \""+str(lenght)+"\",\n"
        result+="               \"start_bit\" : \""+str(start)+"\",\n"
        result+="               \"bit_lenght\" : \""+str(lenght)+"\",\n"
        continue
    if(line.find('bit_number') != -1 and line.find('-') == -1 ):
        outFile+='-'+line        
        start = re.search('[0-9]+',line,flags=0).group(0)
        lenght = 1
        outFile+='+' + "               \"start_bit\" : \""+str(start)+"\",\n"
        outFile+='+' + "               \"bit_lenght\" : \""+str(lenght)+"\",\n"
        result+="               \"start_bit\" : \""+str(start)+"\",\n"
        result+="               \"bit_lenght\" : \""+str(lenght)+"\",\n"
        continue
    if(line.find('info') != -1):
        temp = re.match('.*[.]',line,flags=0)
        if(temp == None):
            result+=line
            continue

        outFile+='-'+line
        if(line.rstrip()[-1] == ','):
            outFile+='+'+temp.group(0)+'",\n'
            result+=temp.group(0)+'",\n'
        else:
            
            outFile+='+'+temp.group(0)+'"\n'
            result+=temp.group(0)+'"\n'
        
        #print(temp.group(0))
        #outFile+="+               \"start_bit\" : \""+str(start)+"\",\n"
        #outFile+="+               \"bit_lenght\" : \""+str(lenght)+"\",\n"
        continue
    if(line.find('desc') != -1):
        temp = re.match('.*[.]',line,flags=0)
        if(temp == None):
            result+=line
            continue
        outFile+='-'+line        
        outFile+='+'+temp.group(0)
        result+=temp.group(0)
        if(line.rstrip()[-1] == ','):
            outFile+="\"},\n"
            result +="\"},\n"
        else:
            outFile+="\"}\n"
            result +="\"}\n"
        continue
        
        #print(temp.group(0))
        #outFile+="+               \"start_bit\" : \""+str(start)+"\",\n"
        #outFile+="+               \"bit_lenght\" : \""+str(lenght)+"\",\n"
        continue
    result+=line    
    #print(line)

#print (outFile)
#print (result.replace("\n", '\n'))
f.write(result.replace("\n", '\n'))
f.close();


#jason = codecs.open('register_sample.json', "r", "utf-8").read()
#jason = codecs.open('GIO.txt', "r", "utf-8").read()
#print(jason)

#nacetlo = json.loads(jason, object_hook=object_decoder)
#print (nacetlo)
#print (nacetlo.peripherals[0].registers[0].info)
#print (nacetlo[0].fields[0].bit_number)

