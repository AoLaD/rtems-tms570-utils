list="ADC CCMSR CRC DCAN DCC DMA DMM EFUSE EMAC EMACM EMIF ESM FLASH FLEX_RAY GIO HTU I2C IOMM LIN MDIO N2HET PBIST PLL PMM RTI RTP SCI TCR TCRAM VIM POM SPI STC"
dest="../headers"
mkdir -p "$dest"
for a in $list ; do
   hfile=$(echo $a | tr 'A-Z' 'a-z')
   python clean_raw_data.py -i ../raw_files/$a.txt -o ../prepared_files/$a.json
   python make_header.py -i ../prepared_files/$a.json -l licence.txt -o $dest/reg_$hfile.h
done

python make_central_header.py -l licence.txt -d ../prepared_files -f "$list" -o $dest/tms570.h
