// Title: fe310-g002 main
// Author: Luke LaCasse
// Date: August 11, 2021
// Description: Main file for testing fe310-g002 drivers

#include <gpio.h>
#include <delay.h>
#include <stdio.h>

void rgb_test(int red, int green, int blue){
    uint32_t rgb_pin[3] = {22, 19, 21};  // RGB Respective Pin Num
    uint32_t rgb_data[3] =  {(uint32_t) red, (uint32_t) green, (uint32_t) blue} ;  // RGB ON/OFF

    for(uint16_t i = 0; i < 3; i++){
        INPUT_EN0 &= ~(1 << rgb_pin[i]);
        OUTPUT_EN0 |= (1 << rgb_pin[i]);
        PUE0 &= ~(1 << rgb_pin[i]);
        IOF_EN0 |= (1 << rgb_pin[i]);

        if(!rgb_data[i]){
            OUTPUT_VAL0 |= (1 << rgb_pin[i]);
        }else{
            OUTPUT_VAL0 &= ~(1 << rgb_pin[i]);
        }
    }
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
int main(void) {
    uint32_t delay_time = 1000;

    INPUT_EN0 &= ~(1 << 22);
    OUTPUT_EN0 |= (1 << 22);
    PUE0 &= ~(1 << 22);
    IOF_EN0 |= (1 << 22);

    delay_ms(delay_time);

    while(1){

        // Check Count Interrupt Flag
        if(RTCIP0_F){
            OUTPUT_VAL0 ^= (1 << 22);
            reset_rtcip0();
            delay_ms(delay_time);
        }

        //printf("Hello, World! \n");
        /*rgb_test(1, 0, 0);
        delay_ms(delay_time);
        rgb_test(0,1,0);
        delay_ms(delay_time);
        rgb_test(0,0,1);
        delay_ms(delay_time);
        rgb_test(1,0,1);
        delay_ms(delay_time);
        rgb_test(1,1,1);
        delay_ms(delay_time);*/
    }
    return 0;
}
#pragma clang diagnostic pop
