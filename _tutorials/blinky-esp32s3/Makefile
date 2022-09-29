BOARD?=esp32:esp32:esp32s3:CDCOnBoot=cdc
PORT?=/dev/tty.usbmodem14*
BUILD=build

.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

all:
	arduino-cli compile --verbose --fqbn $(BOARD) --output-dir $(BUILD) ./

flash:
	arduino-cli upload --verbose --fqbn $(BOARD) --port $(PORT) --input-dir $(BUILD)

	# terminal command from Arduino IDE
	# "~/Library/Arduino15/packages/esp32/tools/esptool_py/4.2.1/esptool" --chip esp32s3 --port "/dev/cu.usbmodem14101" --baud 921600  --before default_reset --after hard_reset write_flash  -z --flash_mode dio --flash_freq 80m --flash_size 4MB 0x0 "/path/to/code/blinky-esp32s3.ino.bootloader.bin" 0x8000 "/path/to/code/blinky-esp32s3.ino.partitions.bin" 0xe000 "~/Library/Arduino15/packages/esp32/hardware/esp32/2.0.5/tools/partitions/boot_app0.bin" 0x10000 "/path/to/code/blinky-esp32s3.ino.bin"

	# terminal command from arduino-cli
	#  /Users/sayanee/Library/Arduino15/packages/esp32/tools/esptool_py/4.2.1/esptool" --chip esp32s3 --port "/dev/tty.usbmodem14101" --baud 921600  --before default_reset --after hard_reset write_flash  -z --flash_mode dio --flash_freq 80m --flash_size 4MB 0x0 "build/blinky-esp32s3.ino.bootloader.bin" 0x8000 "build/blinky-esp32s3.ino.partitions.bin" 0xe000 "/Users/sayanee/Library/Arduino15/packages/esp32/hardware/esp32/2.0.5/tools/partitions/boot_app0.bin" 0x10000 "build/blinky-esp32s3.ino.bin


clean:
	rm -r build
