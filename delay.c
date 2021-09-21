//
// Created by Luke LaCasse on 8/21/21.
//

#include <rtc.h>

extern void delay_ms(uint32_t millisecond){
    RTCCFG &= ~(1 << RTCENALWAYS); // Stop Count
    RTCCFG |= 0x5;  // Mask Bits [31:4] set [0:3]
    // Divide Clock by 2^5
    // ie. ~1ms per count
    RTCCOUNTLO = 0;  // Reset Count Registers
    RTCCOUNTHI = 0;
    RTCS = 0;
    RTCCFG &= ~(1 << RTCIP0); // Reset Count Flag
    RTCCMP0 = (millisecond);  // Load Compare Value
    RTCCFG |= (1 << RTCENALWAYS);  // Start Count

    //printf("RTCIP0: %d\n", (int) ((RTCCFG & (1 << RTCIP0)) >> RTCIP0));
    //print_rtc_register_contents("Count Enable: 1");

    /*while(1){
        if(((RTCCFG & (1 << RTCIP0)) >> RTCIP0)) break;
    }*/
}