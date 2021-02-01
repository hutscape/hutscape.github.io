BOARD?=adafruit:nrf52:feather52832
PORT?=/dev/tty.SLAB_USBtoUART
BUILD=build
# Arduino CLI version 0.14.0 is used.

.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --fqbn $(BOARD) --output-dir $(BUILD) ./

flash:
	adafruit-nrfutil dfu genpkg --dev-type 0x0052 --application $(BUILD)/*.hex dfu-package.zip
	adafruit-nrfutil dfu serial --package dfu-package.zip -p $(PORT) -b 115200

clean:
	rm -rf build
	rm dfu-package.zip
