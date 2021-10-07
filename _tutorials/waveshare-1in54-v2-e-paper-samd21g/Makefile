BOARD?=arduino:samd:mzero_bl
PORT := $(shell ls /dev/cu.usbmodem*)

.PHONY: default all flash clean

default: all flash clean

all:
	arduino-cli compile --fqbn $(BOARD) ./

flash:
	arduino-cli upload -p $(PORT) --fqbn $(BOARD) --verbose

clean:
	rm -r build
