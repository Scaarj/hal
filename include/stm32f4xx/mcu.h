#pragma once

#include "../mcu.h"
#include "stm32f4xx.h"

#define LEDPORT (GPIOA)
#define LED1 (6)
#define ENABLE_GPIO_CLOCK (RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN)
#define _MODER MODER
#define GPIOMODER (GPIO_MODER_MODER6_0)
#include <stdio.h>

namespace hal::stm32f4xx {
class Mcu : public hal::Mcu{
    public:

    void ms_delay(int ms);

    void loop();
};
}
