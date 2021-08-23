#ifndef _IO_HELPER_
#define _IO_HELPER_

#include <avr/io.h>

#define nrOfOutputs 32 //must be multiple of 8
#define nrOfInputs 32 //must be multiple of 8

extern volatile uint8_t outStates[nrOfOutputs/8]; 
extern volatile uint8_t inStates[nrOfInputs/8];
extern volatile uint8_t ioHelperDebounceTable[nrOfInputs];
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
