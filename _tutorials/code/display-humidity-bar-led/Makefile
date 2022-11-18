BOARD?=esp8266com:esp8266:d1_mini
PORT?=/dev/cu.wchusbserial1410
BUILD=build
# Arduino CLI version 0.14.0 is used.

.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --fqbn $(BOARD) --output-dir $(BUILD) ./

flash:
	arduino-cli upload --fqbn $(BOARD) --port $(PORT) --input-dir $(BUILD)

clean:
	rm -r build
