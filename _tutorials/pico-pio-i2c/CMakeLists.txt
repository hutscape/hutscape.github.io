cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(pico-pio-i2c)

pico_sdk_init()

add_executable(pico-pio-i2c)

pico_generate_pio_header(pico-pio-i2c ${CMAKE_CURRENT_LIST_DIR}/i2c.pio)

target_sources(pico-pio-i2c PRIVATE
        pico-pio-i2c.c
        pio_i2c.c
        pio_i2c.h
        )

pico_enable_stdio_usb(pico-pio-i2c 1)
pico_enable_stdio_uart(pico-pio-i2c 1)
pico_add_extra_outputs(pico-pio-i2c)
target_link_libraries(pico-pio-i2c PRIVATE pico_stdlib hardware_pio)
pico_add_extra_outputs(pico-pio-i2c)
