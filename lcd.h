/* 
 * File:   lcd.h
 * Author: parth
 *
 * Created on August 19, 2019, 12:38 PM
 */



#ifndef LCD_H
#define	LCD_H


#ifdef	__cplusplus
extern "C" {
#endif

#include<stdint.h>
#include "delay.h"
#include <xc.h>

    
#define lcd PORTC
#define RS RD0
#define EN RD1
    
void lcd_command(uint8_t cmd);
void lcd_data(uint8_t data);
void lcd_initialize();
void latch();
void command();
void data();
void setCursor(uint8_t col ,uint8_t row);       //row and column start with zero
void lcd_print(unsigned char str[]);
uint8_t rowoffset(uint8_t x);

#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */

