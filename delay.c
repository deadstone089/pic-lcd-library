#include "delay.h"

void delay_ms(unsigned int n){
    __delay_ms(n);
}

void delay_us(unsigned int n){
    __delay_us(n);
}