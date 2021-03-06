/*
 * Configuration bits setting
 */

#ifndef CONFIG_H
#define CONFIG_H

// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include "SchedulerConfig.h"

//--------------------------------------------------------------------------------------------------------------------
#define _XTAL_FREQ ( 16000000 )
#define GIE() ei()
#define GID() di()
//--------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------
#define EEPROM_PASSWORD_ADDRESS 0
#define PASSWORD_LENGTH 8
#define EEPROM_DATA_ADDRESS 8
//--------------------------------------------------------------------------------------------------------------------

#endif /* CONFIG_H */
