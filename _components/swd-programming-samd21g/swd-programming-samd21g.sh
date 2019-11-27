$ make --help # ensure make is installed

$ xcode-select -p # ensure XCocde CLI is installed

$ brew install openocd
$ openocd --help # ensure openocd is installed

$ git clone git@github.com:adafruit/Adafruit_Adalink.git
$ cd Adafruit_Adalink
$ sudo python setup.py develop
$ adalink atsamd21g18 --help # ensure Adalink is installed

$ git clone git@github.com:arduino/ArduinoCore-samd.git
$ cd ArduinoCore-samd/bootloaders/zero
$ make
$ ls bootloaders/zero/samd21_sam_ba.hex # ensure *.hex file is created

$ # flash the Arduino bootloader!
$ adalink -v atsamd21g18 -p stlink -h {PATH_TO_HEX_FILE}/ArduinoCore-samd/bootloaders/zero/samd21_sam_ba.hex
