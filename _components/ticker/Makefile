compile:
	arduino-cli compile --fqbn esp8266com:esp8266:d1_mini .

upload: compile
	arduino-cli upload -p /dev/cu.wchusbserial1410 --fqbn esp8266com:esp8266:d1_mini .

clean:
	rm *.bin
	rm *.elf

.PHONY: compile upload clean
