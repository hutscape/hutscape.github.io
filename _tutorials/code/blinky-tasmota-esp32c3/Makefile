BIN_FILENAME=tasmota32c3cdc.factory.bin
PORT?=/dev/cu.SLAB_USBtoUART*

.PHONY: help default upload log rollback

default: upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

upload: ## Erase flash and then upload the tasmota binary
	@echo "Ensure you plug in the board into the USB port"
	@ls /dev/cu.*
	esptool.py --port $(PORT) erase_flash
	esptool.py --chip esp32c3 --port $(PORT) --baud 460800 write_flash -z 0x0 $(BIN_FILENAME)

rollback: ## Rollback from Tasmota to Arduino
	@echo "Ensure you plug in the board into the USB port"
	esptool.py --port $(PORT) erase_flash
	@echo "Upload Blinky ESP-IDF or Arduino"
