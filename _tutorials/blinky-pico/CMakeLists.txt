cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(blinky_project)

pico_sdk_init()

add_executable(blinky
    blinky-pico.c
)

pico_enable_stdio_usb(blinky 1)
pico_enable_stdio_uart(blinky 1)
pico_add_extra_outputs(blinky)
target_link_libraries(blinky pico_stdlib)
