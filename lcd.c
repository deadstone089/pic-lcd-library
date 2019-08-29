
#include <stdint.h>
#include "lcd.h"
#include "delay.h"

uint8_t rowoffset(uint8_t x){
    uint8_t roffset[]={0x80,0x0c};
    return roffset[x];
}

void lcd_command(uint8_t cmd){
    lcd |= cmd;
    command();
}

void lcd_data(uint8_t data){
    lcd |= data;
    command();
}

void lcd_initialize(){
    lcd_command(0x38);
    lcd_command(0X0E);
    lcd_command(0x01);
    
}

void lcd_setCursor(uint8_t col, uint8_t row){
    lcd_command(rowoffset(row)+col);
}

void lcd_print(unsigned char str[]){
    while(*str!='\0'){
        lcd_data(*str);
        *str++;
    }
}

void command(){
    RS=0;
    latch();
}

void data(){
    RS=1;
    latch();
}

void latch(){
    EN=1;
    delay_ms(50);
    EN=0;
}