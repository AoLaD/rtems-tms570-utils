set list=EMACC

for %%a in (%list%) do (
   python clean_raw_data.py -i ..\raw_files\%%a.txt -o ..\prepared_files\%%a.json 
   python make_header.py -i ..\prepared_files\%%a.json -o ..\headers\reg_%%a.h -l licence.txt 
)


pause