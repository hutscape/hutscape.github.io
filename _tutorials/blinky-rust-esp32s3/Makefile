UPLOAD_PORT?=/dev/cu.usbmodem14*
PROJECT_NAME=blinky-rust-esp32s3

.PHONY: default compile upload log clean

default: clean compile upload

help: ## Show help message
	@awk 'BEGIN {FS = ":.*##"; printf "\nUsage:\n  make \033[36m\033[0m\n"} /^[$$()% 0-9a-zA-Z_-]+:.*?##/ { printf "  \033[36m%-15s\033[0m %s\n", $$1, $$2 } /^##@/ { printf "\n\033[1m%s\033[0m\n", substr($$0, 5) } ' $(MAKEFILE_LIST)

compile: ## Compile rust
	cargo clean
	cargo build

upload: ## Upload the firmware to the board
	espflash $(UPLOAD_PORT) target/xtensa-esp32s3-espidf/debug/$(PROJECT_NAME)

log: ## Start the logs
	espmonitor $(UPLOAD_PORT)


clean: ## Remove all build files
	cargo clean
