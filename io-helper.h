#ifndef _IO_HELPER_
#define _IO_HELPER_

#include <avr/io.h>
extern volatile uint8_t outStates[4]; 
extern volatile uint8_t inStates[4];
extern volatile uint8_t ioHelperDebounceTable[32];
void ioHelperSetOuts(void);
void ioHelperReadPins(void);
void ioHelperIoConf(void);
void ioHelperSetBit(volatile uint8_t *list, uint8_t nr, uint8_t state);
unsigned char ioHelperReadBit(volatile uint8_t *list, uint8_t nr);
void ioHelperDebounce(void);


//Outputs
//Pin | Bit in outStates
#define BitPB0 13
#define BitPB1 12

//Inputs
//Pin | Bit in inStates
#define BitPinC1 0
#define BitPinC5 1

#endif
