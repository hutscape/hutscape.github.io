.PHONY: lint compile upload clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright *.ino

compile:
	arduino-cli compile --fqbn esp8266com:esp8266:d1_mini ./

upload:
	arduino-cli upload -p /dev/cu.wchusbserial1410 --fqbn esp8266com:esp8266:d1_mini ./

clean:
	rm -f .*.bin
	rm -f .*.elf

flash: lint compile upload clean
