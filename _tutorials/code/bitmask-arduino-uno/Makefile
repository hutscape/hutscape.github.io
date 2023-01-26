BOARD?=arduino:avr:uno
PORT?=/dev/cu.usbmodem14*
BUILD=build

.PHONY: default lint all flash clean

default: clean lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --fqbn $(BOARD) --output-dir $(BUILD) ./

flash:
	arduino-cli upload --fqbn $(BOARD) --port $(PORT) --input-dir $(BUILD)

clean:
	rm -rf build
