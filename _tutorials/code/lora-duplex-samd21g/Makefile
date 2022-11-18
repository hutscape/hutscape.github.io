BOARD?=arduino:samd:mzero_bl
PORT := $(shell ls /dev/cu.usbmodem*)
BUILD=build

.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright,-readability/casting,-runtime/int,-whitespace/line_length *.ino

all:
	arduino-cli compile --fqbn $(BOARD) --output-dir $(BUILD) ./

flash:
	arduino-cli upload --fqbn $(BOARD) --port $(PORT) --input-dir $(BUILD)

clean:
	rm -r build
