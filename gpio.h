//
// Created by Luke LaCasse on 8/11/21.
//

#ifndef FE310_G002_GPIO_H
#define FE310_G002_GPIO_H

#include <fe310-g002-mem-map.h>
#include <register.h>


#define INPUT_VAL0 reg_32(GPIO0, 0x00)
#define INPUT_EN0 reg_32(GPIO0, 0x04)
#define OUTPUT_EN0 reg_32(GPIO0, 0x08)
#define OUTPUT_VAL0 reg_32(GPIO0, 0x0C)
#define PUE0 reg_32(GPIO0, 0x10)
#define DS0 reg_32(GPIO0, 0x14)
#define RISE_IE0 reg_32(GPIO0, 0x18)
#define RISE_IP0 reg_32(GPIO0, 0x1C)
#define FALL_IE0 reg_32(GPIO0, 0x20)
#define FALL_IP0 reg_32(GPIO0, 0x24)
#define HIGH_IE0 reg_32(GPIO0, 0x28)
#define HIGH_IP0 reg_32(GPIO0, 0x2C)
#define LOW_IE0 reg_32(GPIO0, 0x30)
#define LOW_IP0 reg_32(GPIO0, 0x34)
#define IOF_EN0 reg_32(GPIO0, 0x38)
#define IOF_SEL0 reg_32(GPIO0, 0x3C)
#define OUT_XOR0 reg_32(GPIO0, 0x40)
#define PASSTHRU_HIGH_IE0 reg_32(GPIO0, 0x44)
#define PASSTHRU_LOW_IE0 reg_32(GPIO0, 0x48)

extern void print_gpio_register_contents(char *status);

#endif //FE310_G002_GPIO_H
