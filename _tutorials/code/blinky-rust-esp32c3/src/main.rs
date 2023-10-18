use esp_idf_hal::{delay::FreeRtos, gpio::PinDriver, peripherals::Peripherals};
use esp_idf_sys as _;

fn main() {
    esp_idf_sys::link_patches();

    let peripherals = Peripherals::take().unwrap();
    let mut led_pin = PinDriver::output(peripherals.pins.gpio3).unwrap();

    loop {
        led_pin.set_low().unwrap();
        FreeRtos::delay_ms(1000);

        led_pin.set_high().unwrap();
        FreeRtos::delay_ms(1000);
        println!("blink");
    }
}
