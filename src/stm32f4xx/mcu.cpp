#include "stm32f4xx/mcu.h"

using namespace hal::stm32f4xx;

void Mcu::ms_delay(int ms)
 {
  while (ms-- > 0) {
    volatile int x = 500;
    while (x-- > 0) __asm("nop");
  }
}

void Mcu::loop() {
    ENABLE_GPIO_CLOCK;             // enable the clock to GPIO
    LEDPORT->_MODER |= GPIOMODER;  // set pins to be general purpose output
    for (;;) {
        ms_delay(5000);
        LEDPORT->ODR ^= (1 << LED1);  // toggle diodes
  }
}