UPLOAD_PORT?=/dev/cu.usbmodem1*
UART_PORT?=/dev/cu.usbserial-14*

.PHONY: help rollback

default: rollback

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

rollback: ## Rollback from Tasmota or Micropython to ESP-IDF or Arduino
	@echo "Ensure you plug in the board into the UART port"
	esptool.py --port $(UART_PORT) erase_flash
	@echo "Upload Blinky with ESP-IDF and then, Arduino"
