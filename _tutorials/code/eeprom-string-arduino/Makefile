.PHONY: lint compile upload clean

flash: lint compile upload clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

compile:
	arduino-cli compile --fqbn arduino:avr:uno ./

upload:
	arduino-cli upload -p /dev/cu.usbmodem14* --fqbn arduino:avr:uno ./

clean:
	rm -f .*.hex
	rm -f .*.elf
