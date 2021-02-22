#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"

bool reserved_addr(uint8_t addr) {
  return (addr & 0x78) == 0 || (addr & 0x78) == 0x78;
}

int main() {
  stdio_init_all();

  // This example will use I2C0 on GPIO4 (SDA) and GPIO5 (SCL) running at 100kHz
  i2c_init(i2c0, 100 * 1000);
  gpio_set_function(4, GPIO_FUNC_I2C);
  gpio_set_function(5, GPIO_FUNC_I2C);
  gpio_pull_up(4);
  gpio_pull_up(5);

  while (true) {
    int addrfound;

    printf("\nI2C Bus Scan for Si7021\n");
    printf("   0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F\n");

    for (int addr = 0; addr < (1 << 7); ++addr) {
      if (addr % 16 == 0) {
        printf("%02x ", addr);
      }

      int ret;
      uint8_t rxdata;
      if (reserved_addr(addr))
        ret = PICO_ERROR_GENERIC;
      else
        ret = i2c_read_blocking(i2c0, addr, &rxdata, 1, false);

      if (ret < 0) {
        printf(".");
      } else {
        printf("@");
        addrfound = addr;
      }

      printf(addr % 16 == 15 ? "\n" : "  ");
    }

    printf("I2C0 bus scan address is at 0x%02x\n", addrfound);
    sleep_ms(2000);
  }
}
