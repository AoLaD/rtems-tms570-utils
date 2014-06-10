# -*- coding: utf-8 -*-
import re
import sys
import codecs
import msvcrt

errors = 0
nonErrors = 0
errorList = []
full = []
#n is number of line to begin search
#number is searched number
#finds specific number(row) in field description table
def findNumber(n,number):
    originalLine = n
    while n+1<originalLine+100:
        n+=1
        temp = re.match('[0-9\-]+',full[n],flags=0)
        if temp != None and len(temp.group(0)) == len(full[n].strip()):            
            #temp2 = re.match('[A-Z\_0-9\[\]]{3,50}',full[n+2],flags=0)
            temp2 = re.match('[^a-z\s]{3,50}',full[n+2],flags=0)
            if ( (temp2 != None) and (len(temp2.group(0)) == len(full[n+2].strip()))) or (full[n+2].find('Reserved')!=-1)  or (full[n+2].find('RW')!=-1)  or (full[n+2].find('sbz')!=-1):
                if int(temp.group(0).split('-')[0])==number:
                    return n
    #print('Error in '+full[originalLine] + 'searched number: '+str(number))
    #print(re.match('[^a-z]{3,50}','PCS[7-0]QUAD[3-0]',flags=0).group(0))
    #ErrorInParsingDataTable

#n is an index of table's first line 
#parse the table extracting bitfields           
def parseTable(n):
    returnedString = []
    originalLineIndex = n
    if full[n+2].find('Bit') != -1:
        if full[n+4].find('Field') != -1:
            nextNumber = 31
            while nextNumber >= 0:
                n = findNumber(n,nextNumber)
                if n == None:
                    if nextNumber == 31:
                       nextNumber = 16
                       n = originalLineIndex
                       continue
                    return
                if(full[n+2].find('Reserved') != -1):
                    returnedString.append(full[n].strip()+' '+full[n+2].strip())
                    #print(full[n].strip()+' '+full[n+2].strip())                    
                else:                    
                    #print(full[n].strip()+' '+full[n+2].strip()+' '+full[n+4].split('.')[0].strip())
                    returnedString.append(full[n].strip()+' '+full[n+2].strip()+' '+full[n+4].split('.')[0].strip())
                if full[n].find('-') != -1:
                   firstNumber = int(full[n].split('-', 1 )[0])
                   nextNumber = int(full[n].split('-', 1 )[1])-1
                else:
                   firstNumber = int(full[n])
                   nextNumber = int(full[n])-1
                
            return returnedString
                        
                  
#n is a name of the register
#finds field description table assosiated with register and then calls parse table
def findTable(n):
    #print(n)
    global errors 
    global nonErrors
    global errorList
    global full
    shortForm = n.split(';', 1 )[0]
    fullForm = n.split(';', 1 )[1]

    if shortForm.find('RTPGLBCTRL') != -1:
        errors+=1
        errorList.append('Error - '+n)
        return
    if shortForm.find('EFCBOUND') != -1:
        errors+=1
        errorList.append('Error - '+n)
        return
    
    for idx,line in enumerate(full):
        if line.find(shortForm) != -1:
            if line.find('FieldDescriptions') != -1:
                parsedTable = parseTable(idx)
                if parsedTable != None:
                    return parsedTable
    for idx,line in enumerate(full):
        if line.find(fullForm) != -1:
            if line.find('FieldDescriptions') != -1:
                parsedTable = parseTable(idx)
                if parsedTable != None:
                    return parsedTable
                
    for idx,line in enumerate(full):
        if line.find(shortForm) != -1:
            if line.find('Table') != -1:    
                parsedTable = parseTable(idx)
                if parsedTable != None:
                    return parsedTable               
    for idx,line in enumerate(full):
        if line.find(fullForm) != -1:
            if line.find('Table') != -1:    
                parsedTable = parseTable(idx)
                if parsedTable != None:
                    return parsedTable
    errors+=1
    errorList.append('Error - '+n)
    #print (n)
    

def main():
        
    i = 1
    s = codecs.open('pdf.txt', "r", "utf-8")
    global full
    full = codecs.open('pdf.txt', "r", "utf-8")

##cut intro part of the pdf and save rest in the full
    while True:
        temp= full.readline()
        if temp.find('Chapter1')!= -1:
            break;
    full = full.readlines()
    listik = []
    #fn = s.readlines()

##find list of figures
    while True:
        line = s.readline()
        if line.find('ListofFigures') != -1:
            print('fn1')
            break
        if(i%5000==0):
            print('fn2')
            break
##get a list of all registers        
    print(i)
    lastLine = 'by'
    listOfReg = []
    while True:
        lastLine2 = lastLine
        lastLine = line
        line = s.readline()
        if not line: break
        if line.find('Offset') != -1:
            line = s.readline()
            line = s.readline()
            if line.find('Acronym') != -1:
                line = s.readline()
                line = s.readline()
                if line.find('RegisterDescription') != -1:
                    line = s.readline()
                    line = s.readline()
                    if line.find('Section') != -1:
                        #print('nasel '+lastLine2)
                        temp = re.search('(?<=\.).*', lastLine2, flags=0)
                        #print(lastLine2)                    
                        s.readline()
                        while True:
                            prvniSloupec = s.readline().strip()
                            if prvniSloupec.find('.') != -1:
                                line = prvniSloupec
                                #print('')
                                break
                            s.readline()    
                            druhySloupec = s.readline().strip()
                            if druhySloupec.find('Reserved') != -1:
                                s.readline()
                                s.readline()
                                s.readline()
                            else:                            
                                s.readline()
                                tretiSloupec = s.readline().strip()
                                s.readline()
                                ctvrtySloupec = s.readline().strip()
                                s.readline()
                                if prvniSloupec.find('SPNU499B') != -1 or druhySloupec.find('SPNU499B') != -1 or tretiSloupec.find('SPNU499B') != -1 or ctvrtySloupec.find('SPNU499B') != -1:
                                    break
                                print(prvniSloupec+' '+druhySloupec+' '+tretiSloupec)
                                listOfReg.append(druhySloupec+';'+tretiSloupec)
#debug lines
    #findTable('EFCBOUND;EFCBoundaryControlRegister')
    #parsedTable = findTable('PMPROTCLR0;PeripheralMemoryProtectionClearRegister0')                            
#try to get informations about found registers
    nonErrors = 0
    print('start')                        
    for reg in listOfReg:
        #print(reg.replace(';',' '))
        parsedTable = []
        parsedTable = findTable(reg)
        if parsedTable == None:
            continue
        print(reg.replace(';',' '))
        for line in parsedTable:
            print (line)    
        print('')
        nonErrors+=1

    print('errors')
    print(errors)
    print('fullyParsed')
    print(nonErrors)
    print('listOfErrors')
    for er in errorList:
        print(er)
        

main()
