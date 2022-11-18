BOARD?=arduino:samd:mzero_bl
PORT := $(shell ls /dev/cu.usbmodem*)

.PHONY: default lint all flash clean

default: all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --fqbn $(BOARD) ./

flash:
	arduino-cli upload -p $(PORT) --fqbn $(BOARD)

clean:
	rm -r build
