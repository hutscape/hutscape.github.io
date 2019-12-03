BOARD?=esp8266com:esp8266:d1_mini
PORT?=/dev/cu.wchusbserial1410

.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --fqbn $(BOARD) ./

flash:
	arduino-cli upload -p $(PORT) --fqbn $(BOARD) ./

clean:
	rm -f .*.bin
	rm -f .*.elf
