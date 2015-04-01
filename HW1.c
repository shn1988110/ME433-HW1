//HW1 PIC32MX250 Device Configuration

// DEVCFG0
#pragma config DEBUG = 1x // no debugging
#pragma config JTAGEN = 0 // no jtag
#pragma config ICESEL = 11 // use PGED1 and PGEC1
#pragma config PWP = 111111111 // no write protect
#pragma config BWP = 0 // not boot write protect
#pragma config CP = 1 // no code protect

// DEVCFG1
#pragma config FNOSC = 011 // use primary oscillator with pll
#pragma config FSOSCEN = 0 // turn off secondary oscillator
#pragma config IESO = 0 // no switching clocks
#pragma config POSCMOD = 10 // high speed crystal mode
#pragma config OSCIOFNC = 1 // free up secondary osc pins
#pragma config FPBDIV = 00 // divide CPU freq by 1 for peripheral bus clock
#pragma config FCKSM = 1x // do not enable clock switch
#pragma config WDTPS = 10100 // slowest wdt
#pragma config WINDIS = 1 // no wdt window
#pragma config FWDTEN = 0 // wdt off by default
#pragma config FWDTWINSZ = 11 // wdt window at 25%

// DEVCFG2 - get the CPU clock to 40MHz
#pragma config FPLLIDIV = 001 // divide input clock (8 MHz) by 2 to be in range 4-5MHz
#pragma config FPLLMUL = 101 // multiply clock after FPLLIDIV
#pragma config UPLLIDIV = 001 // divide clock after FPLLMUL
#pragma config UPLLEN = 0 // USB clock on
#pragma config FPLLODIV = 000 // divide clock by 1 to output on pin

// DEVCFG3
#pragma config USERID = 0 // some 16bit userid
#pragma config PMDL1WAY = 1 // not multiple reconfiguration, check this
#pragma config IOL1WAY = 1 // not multimple reconfiguration, check this
#pragma config FUSBIDIO = 1 // USB pins controlled by USB module
#pragma config FVBUSONIO = 1 // controlled by USB module


void main(void)
{
ANSELBbits.ANSB7 = 0;		
TRISBbits.TRISB7 = 0;		// Set LED1 to digital output pin

ANSELBbits.ANSB13 = 0;
TRISBbits.TRISB13 = 1;		// Set USER to digital input pin	






}