//
// Created by Luke LaCasse on 8/12/21.
//

#ifndef FE310_G002_RTC_H
#define FE310_G002_RTC_H

#include <register.h>
#include <fe310-g002-mem-map.h>

/*
#define RTCCFG (*(uint32_t *) (AON + 0x040))
#define RTCCOUNTLO (*(uint32_t *) (AON + 0x048))
#define RTCCOUNTHI (*(uint16_t *) (AON + 0x04C))
#define RTCS (*(uint32_t *) (AON + 0x050))
#define RTCCMP0 (*(uint32_t *) (AON + 0x060))
*/


#define RTCCFG reg_32(AON, 0x40)
#define RTCIP0 28
#define RTCENALWAYS 12

#define RTCCOUNTLO reg_32(AON, 0x48)
#define RTCCOUNTHI reg_16(AON, 0x4C)
#define RTCS reg_32(AON, 0x50)
#define RTCCMP0 reg_32(AON, 0x60)

#define RTCIP0_F ((RTCCFG & (1 << RTCIP0)) >> RTCIP0)  // Flag Bit for Count Interrupt

extern void print_rtc_register_contents(char *status);
extern void set_rtcip0();
extern void reset_rtcip0();

#endif //FE310_G002_RTC_H
