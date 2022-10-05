from machine import Pin
import time

led = Pin(48, Pin.OUT)
for i in range(10):
  led.on()
  time.sleep_ms(500)
  led.off()
  time.sleep_ms(500)
  print("Blink ", i+1)
