set list=ADC CCMSR CRC DCAN DCC DMA DMM EFUSE EMIF ESM EMAC FLASH GIO HTU I2C IOMM LIN N2HET PBIST PLL PMM POM RTI RTP SCI SPI STC TCR TCRAM VIM

for %%a in (%list%) do (
   python clean_raw_data.py -i ..\raw_files\%%a.txt > ..\prepared_files\%%a.json
   python make_header.py -i ..\prepared_files\%%a.json -l licence.txt > ..\headers\%%a.h
)

python make_central_header.py -l licence.txt -d ..\prepared_files -f "%list%" > ..\headers\tms570.h

pause

