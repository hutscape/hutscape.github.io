BOARD?=esp32:esp32:esp32s3
PORT?=/dev/tty.usbmodem14*
BUILD=build

.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	# TODO Fix serial monitor after upload
	arduino-cli compile --build-property "menu.CDCOnBoot.cdc=Enabled" --fqbn $(BOARD) --output-dir $(BUILD) ./

flash:
	arduino-cli upload --fqbn $(BOARD) --port $(PORT) --input-dir $(BUILD)

clean:
	rm -r build
