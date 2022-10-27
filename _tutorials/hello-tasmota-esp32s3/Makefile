BIN_FILENAME=tasmota32s3cdc.factory.bin
UPLOAD_PORT?=/dev/cu.usbmodem1*
UART_PORT?=/dev/cu.usbserial-14*

.PHONY: help default upload log rollback

default: upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

upload: ## Erase flash and then upload the micropython binary
	@echo "Ensure you plug in the board into the USB port"
	@ls /dev/cu.*
	esptool.py --port  $(UPLOAD_PORT) erase_flash
	esptool.py --port $(UPLOAD_PORT) write_flash --flash_mode dio --flash_size 4MB 0x0 $(BIN_FILENAME)

log: ## Access the serial monitor with ampy
	@echo "Ensure you plug in the board into the UART port"
	@ls /dev/cu.*
	ampy --port $(UART_PORT) run $(PYTHON_FILE)

rollback: ## Rollback from Tasmota to Arduino
	@echo "Ensure you plug in the board into the UART port"
	esptool.py --port $(UART_PORT) erase_flash
	@echo "Upload Blinky PlatformIO and Arduino code"
