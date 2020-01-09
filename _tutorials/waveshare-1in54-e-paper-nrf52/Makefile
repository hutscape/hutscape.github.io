BOARD?=adafruit:nrf52:feather52832
PORT?=/dev/tty.SLAB_USBtoUART

.PHONY: default lint all flash clean

default: all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --fqbn $(BOARD) ./

flash:
	adafruit-nrfutil dfu genpkg --dev-type 0x0052 --application ./.*.hex dfu-package.zip
	adafruit-nrfutil dfu serial --package dfu-package.zip -p $(PORT) -b 115200

clean:
	rm -f .*.elf
	rm -f .*.hex
	rm -f *.zip
