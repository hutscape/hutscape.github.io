YAML_FILE=blinky-esphome-esp32s3.yaml
UPLOAD_PORT?=/dev/cu.usbmodem14*
SERIAL_PORT?=/dev/cu.usbserial-14*

.PHONY: default compile upload clean

default: clean compile upload

compile:
	esphome compile $(YAML_FILE)

upload:
	@echo "Ensure you plug in the board into the USB port"
	esphome upload --device $(UPLOAD_PORT) $(YAML_FILE)

log:
	@echo "Ensure you plug in the board into the UART port"
	esphome logs --device $(SERIAL_PORT) $(YAML_FILE)

clean:
	rm -r .esphome
