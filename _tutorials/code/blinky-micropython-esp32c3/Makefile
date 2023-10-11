PYTHON_FILE=blink.py
BIN_FILENAME=ESP32_GENERIC_C3-20231005-v1.21.0.bin
PORT?=/dev/cu.usbserial-*

.PHONY: help default upload log

default: upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

upload: ## Erase flash and then upload the micropython binary
	@echo "Ensure you plug in the board into the USB port"
	@ls /dev/cu.*
	esptool.py --chip esp32c3 --port $(PORT) erase_flash
	esptool.py --chip esp32c3 --port $(PORT) --baud 460800 write_flash -z 0x0 $(BIN_FILENAME)

log: ## Access the serial monitor with rshell
	@ls /dev/cu.*
	@echo "Ensure you plug in the board into the USB port"
	@echo "Then upload the python file with command: cp blinky.py /pyboard"
	@echo "Then entier the REPL with command: repl"
	@echo "Then enter command: import blinky"
	rshell --port $(PORT)

rollback:
	@ls /dev/cu.*
	@echo "Ensure you plug in the board into the USB port"
	esptool.py --port $(PORT) erase_flash
	@echo "Flash in ESP-IDF blinky"
