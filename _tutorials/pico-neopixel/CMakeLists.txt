cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(pico-neopixel)

pico_sdk_init()

add_executable(pico-neopixel)

pico_generate_pio_header(pico-neopixel ${CMAKE_CURRENT_LIST_DIR}/ws2812.pio)

target_sources(pico-neopixel PRIVATE pico-neopixel.c)

pico_enable_stdio_usb(pico-neopixel 1)
pico_enable_stdio_uart(pico-neopixel 1)
pico_add_extra_outputs(pico-neopixel)
target_link_libraries(pico-neopixel PRIVATE pico_stdlib hardware_pio)
pico_add_extra_outputs(pico-neopixel)
