//
// Created by Luke LaCasse on 8/21/21.
//

#include <gpio.h>
#include <cpu.h>
#include <stdio.h>


extern void print_gpio_register_contents(char *status){
    printf("%s %s Register Contents:\n", CPU_MAKE, CPU_MODEL);
    printf("Status: [ %s ]\n", status);
    printf("input_val: 0x%x\n", (int) INPUT_VAL0);
    printf("input_en: 0x%x\n", (int) INPUT_EN0);
    printf("output_en: 0x%x\n", (int) OUTPUT_EN0);
    printf("output_val: 0x%x\n", (int) OUTPUT_VAL0);
    printf("pue: 0x%x\n", (int) PUE0);
    printf("ds: 0x%x\n", (int) DS0);
    printf("rise_ie: 0x%x\n", (int) RISE_IE0);
    printf("rise_ip: 0x%x\n", (int) RISE_IP0);
    printf("fall_ie: 0x%x\n", (int) FALL_IE0);
    printf("fall_ip: 0x%x\n", (int) FALL_IP0);
    printf("high_ie: 0x%x\n", (int) HIGH_IE0);
    printf("high_ip: 0x%x\n", (int) HIGH_IP0);
    printf("low_ie: 0x%x\n", (int) LOW_IE0);
    printf("low_ip: 0x%x\n", (int) LOW_IP0);
    printf("iof_en: 0x%x\n", (int) IOF_EN0);
    printf("iof_sel: 0x%x\n", (int) IOF_SEL0);
    printf("out_xor: 0x%x\n", (int) OUT_XOR0);
    printf("passthru_high_ie: 0x%x\n", (int) PASSTHRU_HIGH_IE0);
    printf("passthru_low_ie: 0x%x\n", (int) PASSTHRU_LOW_IE0);
}