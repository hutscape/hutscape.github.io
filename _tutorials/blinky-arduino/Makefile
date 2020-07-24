BOARD?=arduino:avr:uno
PORT?=/dev/cu.usbmodem14*

.PHONY: default lint all flash clean

default: all flash clean

all:
	arduino-cli compile --fqbn $(BOARD) ./

flash:
	arduino-cli upload --fqbn $(BOARD) --port $(PORT)

clean:
	rm -r build
