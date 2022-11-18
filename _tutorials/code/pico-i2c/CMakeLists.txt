cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(pico-i2c_project)

pico_sdk_init()

add_executable(pico-i2c
    pico-i2c.c
)

pico_enable_stdio_usb(pico-i2c 1)
pico_enable_stdio_uart(pico-i2c 1)
pico_add_extra_outputs(pico-i2c)
target_link_libraries(pico-i2c pico_stdlib hardware_i2c)
