BOARD?=esp32:esp32:esp32s3:CDCOnBoot=cdc
PORT?=/dev/cu.usbmodem14*
UART_PORT?=/dev/cu.usbserial-1*
BUILD=build
## Pass in V=--verbose to output more information than default

.PHONY: help default lint compile upload clean

default: clean lint compile upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

lint: ## Lint code using cpplint
	cpplint --extensions=ino --filter=-legal/copyright,-runtime/int *.ino

compile: ## Compile code and create the firmware binary
	arduino-cli compile $(V) --fqbn $(BOARD) --output-dir $(BUILD) ./

upload: ## Upload the firmware to the board
	arduino-cli upload $(V) --fqbn $(BOARD) --port $(PORT) --input-dir $(BUILD)

rollback:
	@echo "Ensure you plug into the UART port of ESP32-S3 board"
	esptool.py --port $(UART_PORT) erase_flash
	esptool.py --port $(UART_PORT) erase_flash
	@echo "Ensure flash in the blinky example of ESP-IDF before flashing in Arduino code"

clean: ## Remove all built files
	rm -rf build
