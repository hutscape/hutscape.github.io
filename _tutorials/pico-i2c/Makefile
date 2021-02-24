.PHONY: default lint all flash clean

default: lint all flash clean

lint:
	cpplint --extensions=c --filter=-legal/copyright,-build/include_subdir,-runtime/threadsafe_fn *.c

build:
	mkdir build
	cd build; cmake ..
	cd build; make -j4

all: clean build

flash:
	cp build/*.uf2 /Volumes/RPI-RP2
	sleep 2
	ls -al /dev/cu.usb*

clean:
	rm -rf build
