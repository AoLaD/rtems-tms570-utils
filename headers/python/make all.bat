set list=ADC CCMSR CRC CPMP DCAN DCC DMA DMM EFUSE EMIF ESM FLASH FLEX_RAY GIO HTU I2C IOMM LIN MDIO N2HET PBIST PLL PMM POM RTI RTP SCI SPI STC TCR TCRAM VIM

for %%a in (%list%) do (
   python clean_raw_data.py -i %%a.txt -o %%a.json 
   python make_header.py -i %%a.json -o %%a.txt -l licence.txt > ..\headers\%%a.h
)
pause

