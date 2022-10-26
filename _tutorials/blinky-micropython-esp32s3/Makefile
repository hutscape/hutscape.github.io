PYTHON_FILE=blink.py
BIN_FILENAME=GENERIC_S3-20220618-v1.19.1.bin
UPLOAD_PORT?=/dev/cu.usbmodem14*
SERIAL_PORT?=/dev/cu.usbserial-14*

.PHONY: help default upload log

default: upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

upload: ## Erase flash and then upload the micropython binary
	@echo "Ensure you plug in the board into the USB port"
	@ls /dev/cu.*
	esptool.py --chip esp32s3 --port $(UPLOAD_PORT) erase_flash
	esptool.py --chip esp32s3 --port $(UPLOAD_PORT) write_flash -z 0 $(BIN_FILENAME)

log: ## Access the serial monitor with ampy
	@ls /dev/cu.*
	@echo "Ensure you plug in the board into the UART port"
	ampy --port $(SERIAL_PORT) run $(PYTHON_FILE)

rollback:
	@ls /dev/cu.*
	@echo "Ensure you plug in the board into the UART port"
	esptool.py --port $(SERIAL_PORT) erase_flash
	@echo "Flash in ESP-IDF blinky"
