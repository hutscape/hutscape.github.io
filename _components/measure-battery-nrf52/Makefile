.PHONY: lint compile upload clean

lint:
	# FIXME: Remove -readability/casting
	# measure-battery-nrf52.ino:31
	cpplint --extensions=ino --filter=-legal/copyright,-readability/casting *.ino

compile:
	arduino-cli compile --fqbn adafruit:nrf52:feather52832 ./

upload:
	adafruit-nrfutil dfu genpkg --dev-type 0x0052 --application ./.*.hex dfu-package.zip
	adafruit-nrfutil dfu serial --package dfu-package.zip -p /dev/tty.SLAB_USBtoUART -b 115200

clean:
	rm -f .*.bin
	rm -f .*.elf
	rm -f .*.hex
	rm -f *.zip

flash: lint compile upload clean
