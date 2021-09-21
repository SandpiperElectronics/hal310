//
// Created by Luke LaCasse on 8/21/21.
//

#include <rtc.h>
#include <cpu.h>
#include <stdio.h>

extern void print_rtc_register_contents(char *status){
    printf("%s %s aon_register contents:\n", CPU_MAKE, CPU_MODEL);
    printf("[ Status: %s]\n", status);
    printf("rtccfg [0x%x]: 0x%x\n", (int) &RTCCFG, (int) RTCCFG);
    printf("rtccounthi [0x%x]: 0x%x\n", (int) &RTCCOUNTHI, (int) RTCCOUNTHI);
    printf("rtccountlo [0x%x]: 0x%x\n", (int) &RTCCOUNTLO, (int) RTCCOUNTLO);
}

extern void set_rtcip0(){
    RTCCFG |= (1 << RTCIP0);
    RTCS = 0x00000000;
}

extern void reset_rtcip0(){
    RTCCFG &= ~(1 << RTCIP0);
    RTCS = 0xFFFFFFFF;
}



