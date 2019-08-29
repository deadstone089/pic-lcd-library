/* 
 * File:   delay.h
 * Author: parth
 *
 * Created on August 19, 2019, 12:48 PM
 */

#ifndef DELAY_H
#define	DELAY_H

#ifdef	__cplusplus
extern "C" {
#endif
#include <xc.h>
#define _XTAL_FREQ 20000000

void delay_ms();
void delay_us();

#ifdef	__cplusplus
}
#endif

#endif	/* DELAY_H */

