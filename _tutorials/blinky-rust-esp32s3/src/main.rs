use std::thread;
use std::time::Duration;
use esp_idf_sys as _;
use embedded_hal::digital::blocking::OutputPin;
use esp_idf_hal::peripherals::Peripherals;

fn main() {
  esp_idf_sys::link_patches();

  let peripherals = Peripherals::take().unwrap();
  let mut led = peripherals.pins.gpio5.into_output().unwrap();
  let n = 1;

  while n == 1 {
    led.set_high().unwrap();
    thread::sleep(Duration::from_millis(1000));

    led.set_low().unwrap();
    thread::sleep(Duration::from_millis(1000));

    println!("blink");
  }
}
