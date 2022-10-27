BOARD?=esp32:esp32:esp32s3:CDCOnBoot=cdc
PORT?=/dev/cu.usbmodem14*
BUILD=build
## Pass in V=--verbose to output more information than default

.PHONY: help default lint compile upload clean

default: clean lint compile upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

lint: ## Lint code using cpplint
	cpplint --extensions=ino --filter=-legal/copyright *.ino

compile: ## Compile code and create the firmware binary
	arduino-cli compile $(V) --fqbn $(BOARD) --output-dir $(BUILD) ./

upload: ## Upload the firmware to the board
	arduino-cli upload $(V) --fqbn $(BOARD) --port $(PORT) --input-dir $(BUILD)

	# terminal command from Arduino IDE
	# "~/Library/Arduino15/packages/esp32/tools/esptool_py/4.2.1/esptool" --chip esp32s3 --port "/dev/cu.usbmodem14101" --baud 921600  --before default_reset --after hard_reset write_flash  -z --flash_mode dio --flash_freq 80m --flash_size 4MB 0x0 "/path/to/code/blinky-esp32s3.ino.bootloader.bin" 0x8000 "/path/to/code/blinky-esp32s3.ino.partitions.bin" 0xe000 "~/Library/Arduino15/packages/esp32/hardware/esp32/2.0.5/tools/partitions/boot_app0.bin" 0x10000 "/path/to/code/blinky-esp32s3.ino.bin"

	# terminal command from arduino-cli
	#  ~/Library/Arduino15/packages/esp32/tools/esptool_py/4.2.1/esptool" --chip esp32s3 --port "/dev/tty.usbmodem14101" --baud 921600  --before default_reset --after hard_reset write_flash  -z --flash_mode dio --flash_freq 80m --flash_size 4MB 0x0 "build/blinky-esp32s3.ino.bootloader.bin" 0x8000 "build/blinky-esp32s3.ino.partitions.bin" 0xe000 "~/Library/Arduino15/packages/esp32/hardware/esp32/2.0.5/tools/partitions/boot_app0.bin" 0x10000 "build/blinky-esp32s3.ino.bin


clean: ## Remove all built files
	rm -rf build
