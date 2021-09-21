//
// Created by Luke LaCasse on 8/17/21.
//

#ifndef FE310_G002_REGISTER_H
#define FE310_G002_REGISTER_H

#include <inttypes.h>

// Macros to help define register locations
#define reg_32(base, offset) (*(volatile uint32_t *) ((base) + (offset)))
#define reg_16(base, offset) (*(volatile uint16_t *) ((base) + (offset)))

#endif //FE310_G002_REGISTER_H
