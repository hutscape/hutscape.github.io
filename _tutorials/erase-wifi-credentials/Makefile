.PHONY: lint compile upload clean

lint:
	cpplint --extensions=ino --filter=-legal/copyright,-readability/todo,-readability/casting,-runtime/int,-whitespace/line_length,-runtime/printf *.ino

compile:
	arduino-cli compile --fqbn esp8266com:esp8266:d1_mini ./

upload:
	arduino-cli upload -p /dev/cu.wchusbserial1410 --fqbn esp8266com:esp8266:d1_mini ./

clean:
	rm -f .*.bin
	rm -f .*.elf

flash: compile upload clean
