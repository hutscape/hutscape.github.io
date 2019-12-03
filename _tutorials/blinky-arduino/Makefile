BOARD?=arduino:avr:uno
PORT?=/dev/cu.usbmodem14*

.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --fqbn $(BOARD) ./

flash:
	arduino-cli upload -p $(PORT) --fqbn $(BOARD) ./

clean:
	rm -f .*.hex
	rm -f .*.elf
