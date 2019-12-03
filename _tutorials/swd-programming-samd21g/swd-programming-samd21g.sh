$ make --help # ensure make is installed

$ xcode-select -p # ensure XCocde CLI is installed

$ brew install openocd
$ openocd --help # ensure openocd is installed

$ git clone git@github.com:arduino/ArduinoCore-samd.git
$ cd ArduinoCore-samd/bootloaders/zero
$ make
$ ls bootloaders/zero/samd21_sam_ba.hex # ensure *.hex file is created

$ # flash the Arduino bootloader!
$ openocd -f interface/stlink-v2.cfg -c "set CHIPNAME at91samd21g18; set ENDIAN little; set CPUTAPID 0x0bc11477; source [find target/at91samdXX.cfg]" -c "init" -c "reset init" -c "load_image {/path/to/ArduinoCore-samd/bootloaders/zero/samd21_sam_ba.hex} 0 ihex" -c "verify_image {/path/to/ArduinoCore-samd/bootloaders/zero/samd21_sam_ba.hex} 0 ihex" -c "reset run" -c "exit"
