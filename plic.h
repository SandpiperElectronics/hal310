//
// Created by Luke LaCasse on 8/22/21.
//

#ifndef FE310_G002_PLIC_H
#define FE310_G002_PLIC_H

#include <fe310-g002-mem-map.h>
#include <register.h>

#define MSIP reg_32(PLIX)

#define PENDING1 reg_32(PLIC, 0x1000)
#define PENDING2 reg_32(PLIC, 0x1004)

#define ENABLE1 reg_32(PLIC, 0x2000)
#define ENABLE2 reg_32(PLIC, 0x2004)

#define THRESHOLD reg_32(PLIC, 0x00200000)
#define CLAIM reg_32(PLIC, 0x00200004)

#define PLIC_INT_PRIORITY_REG(interrupt_id) reg_32(PLIC, ((interrupt_id) * 4)) // PLIC Interrupt Priority Register
#define SET_PRIORITY(interrupt_id, priority) (PLIC_INT_PRIORITY(interrupt_id) &= (0xFFFFFFFF & (priority)))

#endif //FE310_G002_PLIC_H
