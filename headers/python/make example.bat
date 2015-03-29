set list=CRC GIO

for %%a in (%list%) do (
   python clean_raw_data.py -i %%a.txt -o %%a.json 
   python make_header.py -i %%a.json -o %%a.txt -l licence.txt > ..\headers\%%a.h
)


pause