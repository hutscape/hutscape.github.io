BOARD?=arduino:avr:uno
PORT?=/dev/cu.usbmodem14*
BUILD=build

.PHONY: default lint all flash clean

default: lint compile_a flash clean

a: lint compile_a flash clean

b: lint compile_b flash clean

compile_a:
	arduino-cli compile --clean --fqbn $(BOARD) --build-property compiler.cpp.extra_flags="-DLOCAL_ADDRESS=0xAA -DDESTINATION_ADDRESS=0xBB" --output-dir $(BUILD) ./

compile_b:
	arduino-cli compile --clean --fqbn $(BOARD) --build-property compiler.cpp.extra_flags="-DLOCAL_ADDRESS=0xBB -DDESTINATION_ADDRESS=0xAA" --output-dir $(BUILD) ./

lint:
	cpplint --extensions=ino --filter=-legal/copyright,-whitespace/line_length,-readability/casting,-readability/todo,-runtime/int *.ino

flash:
	arduino-cli upload -p $(PORT) --fqbn $(BOARD) --input-dir $(BUILD) --verbose

clean:
	rm -r build
