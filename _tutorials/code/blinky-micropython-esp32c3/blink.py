from machine import Pin
import time
led_pin = 3  # Default on-board RGB LED GPIO08 does not work

led = Pin(led_pin, Pin.OUT)
for i in range(10):
  led.on()
  time.sleep_ms(500)
  led.off()
  time.sleep_ms(500)
  print("Blink ", i+1)
