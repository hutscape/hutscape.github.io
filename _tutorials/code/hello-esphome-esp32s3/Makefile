YAML_FILE=hello-esphome-esp32s3.yaml
UPLOAD_PORT?=/dev/cu.usbmodem14*
SERIAL_PORT?=/dev/cu.usbserial-14*

.PHONY: default compile upload clean

default: clean compile upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

compile:
	esphome compile $(YAML_FILE)

upload:
	@echo "Ensure you plug in the board into the USB port"
	esphome upload --device $(UPLOAD_PORT) $(YAML_FILE)

log:
	@echo "Ensure you plug in the board into the UART port"
	esphome logs --device $(SERIAL_PORT) $(YAML_FILE)

clean:
	rm -rf .esphome
