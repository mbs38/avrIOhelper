#include <avr/io.h>
#include "io-helper.h"

volatile uint32_t outStates = 0;
volatile uint32_t inStates = 0;

uint8_t getBit1(uint8_t bit) {
    if(outStates&(1<<bit)) return 1;
    else return 0;
}
uint8_t getBit0(uint8_t bit) {
    if(outStates&(1<<bit)) return 0;
    else return 1;
}

void writeBit(volatile uint8_t * port, uint8_t bp, uint8_t bstate) {
    if (outStates&(1<<bstate)) *(port) |= (1<<bp);
    else *(port) &=~(1<<bp);
}

void ioConf(void) {
#ifdef DDRA
DDRA|=0 
#ifdef BitPA0
|(1<<0)      
#endif       
#ifdef BitPA1
|(1<<1)      
#endif       
#ifdef BitPA2
|(1<<2)      
#endif       
#ifdef BitPA3
|(1<<3)      
#endif       
#ifdef BitPA4
|(1<<4)      
#endif       
#ifdef BitPA5
|(1<<5)      
#endif       
#ifdef BitPA6
|(1<<6)      
#endif       
#ifdef BitPA7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRB
DDRB|=0 
#ifdef BitPB0
|(1<<0)      
#endif       
#ifdef BitPB1
|(1<<1)      
#endif       
#ifdef BitPB2
|(1<<2)      
#endif       
#ifdef BitPB3
|(1<<3)      
#endif       
#ifdef BitPB4
|(1<<4)      
#endif       
#ifdef BitPB5
|(1<<5)      
#endif       
#ifdef BitPB6
|(1<<6)      
#endif       
#ifdef BitPB7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRC
DDRC|=0 
#ifdef BitPC0
|(1<<0)      
#endif       
#ifdef BitPC1
|(1<<1)      
#endif       
#ifdef BitPC2
|(1<<2)      
#endif       
#ifdef BitPC3
|(1<<3)      
#endif       
#ifdef BitPC4
|(1<<4)      
#endif       
#ifdef BitPC5
|(1<<5)      
#endif       
#ifdef BitPC6
|(1<<6)      
#endif       
#ifdef BitPC7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRD
DDRD|=0 
#ifdef BitPD0
|(1<<0)      
#endif       
#ifdef BitPD1
|(1<<1)      
#endif       
#ifdef BitPD2
|(1<<2)      
#endif       
#ifdef BitPD3
|(1<<3)      
#endif       
#ifdef BitPD4
|(1<<4)      
#endif       
#ifdef BitPD5
|(1<<5)      
#endif       
#ifdef BitPD6
|(1<<6)      
#endif       
#ifdef BitPD7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRE
DDRE|=0 
#ifdef BitPE0
|(1<<0)      
#endif       
#ifdef BitPE1
|(1<<1)      
#endif       
#ifdef BitPE2
|(1<<2)      
#endif       
#ifdef BitPE3
|(1<<3)      
#endif       
#ifdef BitPE4
|(1<<4)      
#endif       
#ifdef BitPE5
|(1<<5)      
#endif       
#ifdef BitPE6
|(1<<6)      
#endif       
#ifdef BitPE7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRF
DDRF|=0 
#ifdef BitPF0
|(1<<0)      
#endif       
#ifdef BitPF1
|(1<<1)      
#endif       
#ifdef BitPF2
|(1<<2)      
#endif       
#ifdef BitPF3
|(1<<3)      
#endif       
#ifdef BitPF4
|(1<<4)      
#endif       
#ifdef BitPF5
|(1<<5)      
#endif       
#ifdef BitPF6
|(1<<6)      
#endif       
#ifdef BitPF7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRG
DDRG|=0 
#ifdef BitPG0
|(1<<0)      
#endif       
#ifdef BitPG1
|(1<<1)      
#endif       
#ifdef BitPG2
|(1<<2)      
#endif       
#ifdef BitPG3
|(1<<3)      
#endif       
#ifdef BitPG4
|(1<<4)      
#endif       
#ifdef BitPG5
|(1<<5)      
#endif       
#ifdef BitPG6
|(1<<6)      
#endif       
#ifdef BitPG7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRH
DDRH|=0 
#ifdef BitPH0
|(1<<0)      
#endif       
#ifdef BitPH1
|(1<<1)      
#endif       
#ifdef BitPH2
|(1<<2)      
#endif       
#ifdef BitPH3
|(1<<3)      
#endif       
#ifdef BitPH4
|(1<<4)      
#endif       
#ifdef BitPH5
|(1<<5)      
#endif       
#ifdef BitPH6
|(1<<6)      
#endif       
#ifdef BitPH7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRI
DDRI|=0 
#ifdef BitPI0
|(1<<0)      
#endif       
#ifdef BitPI1
|(1<<1)      
#endif       
#ifdef BitPI2
|(1<<2)      
#endif       
#ifdef BitPI3
|(1<<3)      
#endif       
#ifdef BitPI4
|(1<<4)      
#endif       
#ifdef BitPI5
|(1<<5)      
#endif       
#ifdef BitPI6
|(1<<6)      
#endif       
#ifdef BitPI7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRJ
DDRJ|=0 
#ifdef BitPJ0
|(1<<0)      
#endif       
#ifdef BitPJ1
|(1<<1)      
#endif       
#ifdef BitPJ2
|(1<<2)      
#endif       
#ifdef BitPJ3
|(1<<3)      
#endif       
#ifdef BitPJ4
|(1<<4)      
#endif       
#ifdef BitPJ5
|(1<<5)      
#endif       
#ifdef BitPJ6
|(1<<6)      
#endif       
#ifdef BitPJ7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRK
DDRK|=0 
#ifdef BitPK0
|(1<<0)      
#endif       
#ifdef BitPK1
|(1<<1)      
#endif       
#ifdef BitPK2
|(1<<2)      
#endif       
#ifdef BitPK3
|(1<<3)      
#endif       
#ifdef BitPK4
|(1<<4)      
#endif       
#ifdef BitPK5
|(1<<5)      
#endif       
#ifdef BitPK6
|(1<<6)      
#endif       
#ifdef BitPK7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRL
DDRL|=0 
#ifdef BitPL0
|(1<<0)      
#endif       
#ifdef BitPL1
|(1<<1)      
#endif       
#ifdef BitPL2
|(1<<2)      
#endif       
#ifdef BitPL3
|(1<<3)      
#endif       
#ifdef BitPL4
|(1<<4)      
#endif       
#ifdef BitPL5
|(1<<5)      
#endif       
#ifdef BitPL6
|(1<<6)      
#endif       
#ifdef BitPL7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRM
DDRM|=0 
#ifdef BitPM0
|(1<<0)      
#endif       
#ifdef BitPM1
|(1<<1)      
#endif       
#ifdef BitPM2
|(1<<2)      
#endif       
#ifdef BitPM3
|(1<<3)      
#endif       
#ifdef BitPM4
|(1<<4)      
#endif       
#ifdef BitPM5
|(1<<5)      
#endif       
#ifdef BitPM6
|(1<<6)      
#endif       
#ifdef BitPM7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRN
DDRN|=0 
#ifdef BitPN0
|(1<<0)      
#endif       
#ifdef BitPN1
|(1<<1)      
#endif       
#ifdef BitPN2
|(1<<2)      
#endif       
#ifdef BitPN3
|(1<<3)      
#endif       
#ifdef BitPN4
|(1<<4)      
#endif       
#ifdef BitPN5
|(1<<5)      
#endif       
#ifdef BitPN6
|(1<<6)      
#endif       
#ifdef BitPN7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRO
DDRO|=0 
#ifdef BitPO0
|(1<<0)      
#endif       
#ifdef BitPO1
|(1<<1)      
#endif       
#ifdef BitPO2
|(1<<2)      
#endif       
#ifdef BitPO3
|(1<<3)      
#endif       
#ifdef BitPO4
|(1<<4)      
#endif       
#ifdef BitPO5
|(1<<5)      
#endif       
#ifdef BitPO6
|(1<<6)      
#endif       
#ifdef BitPO7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRP
DDRP|=0 
#ifdef BitPP0
|(1<<0)      
#endif       
#ifdef BitPP1
|(1<<1)      
#endif       
#ifdef BitPP2
|(1<<2)      
#endif       
#ifdef BitPP3
|(1<<3)      
#endif       
#ifdef BitPP4
|(1<<4)      
#endif       
#ifdef BitPP5
|(1<<5)      
#endif       
#ifdef BitPP6
|(1<<6)      
#endif       
#ifdef BitPP7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRQ
DDRQ|=0 
#ifdef BitPQ0
|(1<<0)      
#endif       
#ifdef BitPQ1
|(1<<1)      
#endif       
#ifdef BitPQ2
|(1<<2)      
#endif       
#ifdef BitPQ3
|(1<<3)      
#endif       
#ifdef BitPQ4
|(1<<4)      
#endif       
#ifdef BitPQ5
|(1<<5)      
#endif       
#ifdef BitPQ6
|(1<<6)      
#endif       
#ifdef BitPQ7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRR
DDRR|=0 
#ifdef BitPR0
|(1<<0)      
#endif       
#ifdef BitPR1
|(1<<1)      
#endif       
#ifdef BitPR2
|(1<<2)      
#endif       
#ifdef BitPR3
|(1<<3)      
#endif       
#ifdef BitPR4
|(1<<4)      
#endif       
#ifdef BitPR5
|(1<<5)      
#endif       
#ifdef BitPR6
|(1<<6)      
#endif       
#ifdef BitPR7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRS
DDRS|=0 
#ifdef BitPS0
|(1<<0)      
#endif       
#ifdef BitPS1
|(1<<1)      
#endif       
#ifdef BitPS2
|(1<<2)      
#endif       
#ifdef BitPS3
|(1<<3)      
#endif       
#ifdef BitPS4
|(1<<4)      
#endif       
#ifdef BitPS5
|(1<<5)      
#endif       
#ifdef BitPS6
|(1<<6)      
#endif       
#ifdef BitPS7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRT
DDRT|=0 
#ifdef BitPT0
|(1<<0)      
#endif       
#ifdef BitPT1
|(1<<1)      
#endif       
#ifdef BitPT2
|(1<<2)      
#endif       
#ifdef BitPT3
|(1<<3)      
#endif       
#ifdef BitPT4
|(1<<4)      
#endif       
#ifdef BitPT5
|(1<<5)      
#endif       
#ifdef BitPT6
|(1<<6)      
#endif       
#ifdef BitPT7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRU
DDRU|=0 
#ifdef BitPU0
|(1<<0)      
#endif       
#ifdef BitPU1
|(1<<1)      
#endif       
#ifdef BitPU2
|(1<<2)      
#endif       
#ifdef BitPU3
|(1<<3)      
#endif       
#ifdef BitPU4
|(1<<4)      
#endif       
#ifdef BitPU5
|(1<<5)      
#endif       
#ifdef BitPU6
|(1<<6)      
#endif       
#ifdef BitPU7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRV
DDRV|=0 
#ifdef BitPV0
|(1<<0)      
#endif       
#ifdef BitPV1
|(1<<1)      
#endif       
#ifdef BitPV2
|(1<<2)      
#endif       
#ifdef BitPV3
|(1<<3)      
#endif       
#ifdef BitPV4
|(1<<4)      
#endif       
#ifdef BitPV5
|(1<<5)      
#endif       
#ifdef BitPV6
|(1<<6)      
#endif       
#ifdef BitPV7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRW
DDRW|=0 
#ifdef BitPW0
|(1<<0)      
#endif       
#ifdef BitPW1
|(1<<1)      
#endif       
#ifdef BitPW2
|(1<<2)      
#endif       
#ifdef BitPW3
|(1<<3)      
#endif       
#ifdef BitPW4
|(1<<4)      
#endif       
#ifdef BitPW5
|(1<<5)      
#endif       
#ifdef BitPW6
|(1<<6)      
#endif       
#ifdef BitPW7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRX
DDRX|=0 
#ifdef BitPX0
|(1<<0)      
#endif       
#ifdef BitPX1
|(1<<1)      
#endif       
#ifdef BitPX2
|(1<<2)      
#endif       
#ifdef BitPX3
|(1<<3)      
#endif       
#ifdef BitPX4
|(1<<4)      
#endif       
#ifdef BitPX5
|(1<<5)      
#endif       
#ifdef BitPX6
|(1<<6)      
#endif       
#ifdef BitPX7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRY
DDRY|=0 
#ifdef BitPY0
|(1<<0)      
#endif       
#ifdef BitPY1
|(1<<1)      
#endif       
#ifdef BitPY2
|(1<<2)      
#endif       
#ifdef BitPY3
|(1<<3)      
#endif       
#ifdef BitPY4
|(1<<4)      
#endif       
#ifdef BitPY5
|(1<<5)      
#endif       
#ifdef BitPY6
|(1<<6)      
#endif       
#ifdef BitPY7
|(1<<7)      
#endif       
|0;          
            
#endif


#ifdef DDRZ
DDRZ|=0 
#ifdef BitPZ0
|(1<<0)      
#endif       
#ifdef BitPZ1
|(1<<1)      
#endif       
#ifdef BitPZ2
|(1<<2)      
#endif       
#ifdef BitPZ3
|(1<<3)      
#endif       
#ifdef BitPZ4
|(1<<4)      
#endif       
#ifdef BitPZ5
|(1<<5)      
#endif       
#ifdef BitPZ6
|(1<<6)      
#endif       
#ifdef BitPZ7
|(1<<7)      
#endif       
|0;          
            
#endif


}


void setOuts(void) {


}

void ioHelperCpBit(uint8_t reg, uint8_t bi, uint8_t bo) {
    if(reg&(1<<bi)) inStates|=(1<<bo);
    else inStates&=~(1<<bo);
}

void readPins(void) {
#ifdef PINA
#ifdef BitPinA0
ioHelperCpBit(PINA,0,BitPinA0);
#endif
#ifdef BitPinA1
ioHelperCpBit(PINA,1,BitPinA1);
#endif
#ifdef BitPinA2
ioHelperCpBit(PINA,2,BitPinA2);
#endif
#ifdef BitPinA3
ioHelperCpBit(PINA,3,BitPinA3);
#endif
#ifdef BitPinA4
ioHelperCpBit(PINA,4,BitPinA4);
#endif
#ifdef BitPinA5
ioHelperCpBit(PINA,5,BitPinA5);
#endif
#ifdef BitPinA6
ioHelperCpBit(PINA,6,BitPinA6);
#endif
#ifdef BitPinA7
ioHelperCpBit(PINA,7,BitPinA7);
#endif
#endif



#ifdef PINB
#ifdef BitPinB0
ioHelperCpBit(PINB,0,BitPinB0);
#endif
#ifdef BitPinB1
ioHelperCpBit(PINB,1,BitPinB1);
#endif
#ifdef BitPinB2
ioHelperCpBit(PINB,2,BitPinB2);
#endif
#ifdef BitPinB3
ioHelperCpBit(PINB,3,BitPinB3);
#endif
#ifdef BitPinB4
ioHelperCpBit(PINB,4,BitPinB4);
#endif
#ifdef BitPinB5
ioHelperCpBit(PINB,5,BitPinB5);
#endif
#ifdef BitPinB6
ioHelperCpBit(PINB,6,BitPinB6);
#endif
#ifdef BitPinB7
ioHelperCpBit(PINB,7,BitPinB7);
#endif
#endif



#ifdef PINC
#ifdef BitPinC0
ioHelperCpBit(PINC,0,BitPinC0);
#endif
#ifdef BitPinC1
ioHelperCpBit(PINC,1,BitPinC1);
#endif
#ifdef BitPinC2
ioHelperCpBit(PINC,2,BitPinC2);
#endif
#ifdef BitPinC3
ioHelperCpBit(PINC,3,BitPinC3);
#endif
#ifdef BitPinC4
ioHelperCpBit(PINC,4,BitPinC4);
#endif
#ifdef BitPinC5
ioHelperCpBit(PINC,5,BitPinC5);
#endif
#ifdef BitPinC6
ioHelperCpBit(PINC,6,BitPinC6);
#endif
#ifdef BitPinC7
ioHelperCpBit(PINC,7,BitPinC7);
#endif
#endif



#ifdef PIND
#ifdef BitPinD0
ioHelperCpBit(PIND,0,BitPinD0);
#endif
#ifdef BitPinD1
ioHelperCpBit(PIND,1,BitPinD1);
#endif
#ifdef BitPinD2
ioHelperCpBit(PIND,2,BitPinD2);
#endif
#ifdef BitPinD3
ioHelperCpBit(PIND,3,BitPinD3);
#endif
#ifdef BitPinD4
ioHelperCpBit(PIND,4,BitPinD4);
#endif
#ifdef BitPinD5
ioHelperCpBit(PIND,5,BitPinD5);
#endif
#ifdef BitPinD6
ioHelperCpBit(PIND,6,BitPinD6);
#endif
#ifdef BitPinD7
ioHelperCpBit(PIND,7,BitPinD7);
#endif
#endif



#ifdef PINE
#ifdef BitPinE0
ioHelperCpBit(PINE,0,BitPinE0);
#endif
#ifdef BitPinE1
ioHelperCpBit(PINE,1,BitPinE1);
#endif
#ifdef BitPinE2
ioHelperCpBit(PINE,2,BitPinE2);
#endif
#ifdef BitPinE3
ioHelperCpBit(PINE,3,BitPinE3);
#endif
#ifdef BitPinE4
ioHelperCpBit(PINE,4,BitPinE4);
#endif
#ifdef BitPinE5
ioHelperCpBit(PINE,5,BitPinE5);
#endif
#ifdef BitPinE6
ioHelperCpBit(PINE,6,BitPinE6);
#endif
#ifdef BitPinE7
ioHelperCpBit(PINE,7,BitPinE7);
#endif
#endif



#ifdef PINF
#ifdef BitPinF0
ioHelperCpBit(PINF,0,BitPinF0);
#endif
#ifdef BitPinF1
ioHelperCpBit(PINF,1,BitPinF1);
#endif
#ifdef BitPinF2
ioHelperCpBit(PINF,2,BitPinF2);
#endif
#ifdef BitPinF3
ioHelperCpBit(PINF,3,BitPinF3);
#endif
#ifdef BitPinF4
ioHelperCpBit(PINF,4,BitPinF4);
#endif
#ifdef BitPinF5
ioHelperCpBit(PINF,5,BitPinF5);
#endif
#ifdef BitPinF6
ioHelperCpBit(PINF,6,BitPinF6);
#endif
#ifdef BitPinF7
ioHelperCpBit(PINF,7,BitPinF7);
#endif
#endif



#ifdef PING
#ifdef BitPinG0
ioHelperCpBit(PING,0,BitPinG0);
#endif
#ifdef BitPinG1
ioHelperCpBit(PING,1,BitPinG1);
#endif
#ifdef BitPinG2
ioHelperCpBit(PING,2,BitPinG2);
#endif
#ifdef BitPinG3
ioHelperCpBit(PING,3,BitPinG3);
#endif
#ifdef BitPinG4
ioHelperCpBit(PING,4,BitPinG4);
#endif
#ifdef BitPinG5
ioHelperCpBit(PING,5,BitPinG5);
#endif
#ifdef BitPinG6
ioHelperCpBit(PING,6,BitPinG6);
#endif
#ifdef BitPinG7
ioHelperCpBit(PING,7,BitPinG7);
#endif
#endif



#ifdef PINH
#ifdef BitPinH0
ioHelperCpBit(PINH,0,BitPinH0);
#endif
#ifdef BitPinH1
ioHelperCpBit(PINH,1,BitPinH1);
#endif
#ifdef BitPinH2
ioHelperCpBit(PINH,2,BitPinH2);
#endif
#ifdef BitPinH3
ioHelperCpBit(PINH,3,BitPinH3);
#endif
#ifdef BitPinH4
ioHelperCpBit(PINH,4,BitPinH4);
#endif
#ifdef BitPinH5
ioHelperCpBit(PINH,5,BitPinH5);
#endif
#ifdef BitPinH6
ioHelperCpBit(PINH,6,BitPinH6);
#endif
#ifdef BitPinH7
ioHelperCpBit(PINH,7,BitPinH7);
#endif
#endif



#ifdef PINI
#ifdef BitPinI0
ioHelperCpBit(PINI,0,BitPinI0);
#endif
#ifdef BitPinI1
ioHelperCpBit(PINI,1,BitPinI1);
#endif
#ifdef BitPinI2
ioHelperCpBit(PINI,2,BitPinI2);
#endif
#ifdef BitPinI3
ioHelperCpBit(PINI,3,BitPinI3);
#endif
#ifdef BitPinI4
ioHelperCpBit(PINI,4,BitPinI4);
#endif
#ifdef BitPinI5
ioHelperCpBit(PINI,5,BitPinI5);
#endif
#ifdef BitPinI6
ioHelperCpBit(PINI,6,BitPinI6);
#endif
#ifdef BitPinI7
ioHelperCpBit(PINI,7,BitPinI7);
#endif
#endif



#ifdef PINJ
#ifdef BitPinJ0
ioHelperCpBit(PINJ,0,BitPinJ0);
#endif
#ifdef BitPinJ1
ioHelperCpBit(PINJ,1,BitPinJ1);
#endif
#ifdef BitPinJ2
ioHelperCpBit(PINJ,2,BitPinJ2);
#endif
#ifdef BitPinJ3
ioHelperCpBit(PINJ,3,BitPinJ3);
#endif
#ifdef BitPinJ4
ioHelperCpBit(PINJ,4,BitPinJ4);
#endif
#ifdef BitPinJ5
ioHelperCpBit(PINJ,5,BitPinJ5);
#endif
#ifdef BitPinJ6
ioHelperCpBit(PINJ,6,BitPinJ6);
#endif
#ifdef BitPinJ7
ioHelperCpBit(PINJ,7,BitPinJ7);
#endif
#endif



#ifdef PINK
#ifdef BitPinK0
ioHelperCpBit(PINK,0,BitPinK0);
#endif
#ifdef BitPinK1
ioHelperCpBit(PINK,1,BitPinK1);
#endif
#ifdef BitPinK2
ioHelperCpBit(PINK,2,BitPinK2);
#endif
#ifdef BitPinK3
ioHelperCpBit(PINK,3,BitPinK3);
#endif
#ifdef BitPinK4
ioHelperCpBit(PINK,4,BitPinK4);
#endif
#ifdef BitPinK5
ioHelperCpBit(PINK,5,BitPinK5);
#endif
#ifdef BitPinK6
ioHelperCpBit(PINK,6,BitPinK6);
#endif
#ifdef BitPinK7
ioHelperCpBit(PINK,7,BitPinK7);
#endif
#endif



#ifdef PINL
#ifdef BitPinL0
ioHelperCpBit(PINL,0,BitPinL0);
#endif
#ifdef BitPinL1
ioHelperCpBit(PINL,1,BitPinL1);
#endif
#ifdef BitPinL2
ioHelperCpBit(PINL,2,BitPinL2);
#endif
#ifdef BitPinL3
ioHelperCpBit(PINL,3,BitPinL3);
#endif
#ifdef BitPinL4
ioHelperCpBit(PINL,4,BitPinL4);
#endif
#ifdef BitPinL5
ioHelperCpBit(PINL,5,BitPinL5);
#endif
#ifdef BitPinL6
ioHelperCpBit(PINL,6,BitPinL6);
#endif
#ifdef BitPinL7
ioHelperCpBit(PINL,7,BitPinL7);
#endif
#endif



#ifdef PINM
#ifdef BitPinM0
ioHelperCpBit(PINM,0,BitPinM0);
#endif
#ifdef BitPinM1
ioHelperCpBit(PINM,1,BitPinM1);
#endif
#ifdef BitPinM2
ioHelperCpBit(PINM,2,BitPinM2);
#endif
#ifdef BitPinM3
ioHelperCpBit(PINM,3,BitPinM3);
#endif
#ifdef BitPinM4
ioHelperCpBit(PINM,4,BitPinM4);
#endif
#ifdef BitPinM5
ioHelperCpBit(PINM,5,BitPinM5);
#endif
#ifdef BitPinM6
ioHelperCpBit(PINM,6,BitPinM6);
#endif
#ifdef BitPinM7
ioHelperCpBit(PINM,7,BitPinM7);
#endif
#endif



#ifdef PINN
#ifdef BitPinN0
ioHelperCpBit(PINN,0,BitPinN0);
#endif
#ifdef BitPinN1
ioHelperCpBit(PINN,1,BitPinN1);
#endif
#ifdef BitPinN2
ioHelperCpBit(PINN,2,BitPinN2);
#endif
#ifdef BitPinN3
ioHelperCpBit(PINN,3,BitPinN3);
#endif
#ifdef BitPinN4
ioHelperCpBit(PINN,4,BitPinN4);
#endif
#ifdef BitPinN5
ioHelperCpBit(PINN,5,BitPinN5);
#endif
#ifdef BitPinN6
ioHelperCpBit(PINN,6,BitPinN6);
#endif
#ifdef BitPinN7
ioHelperCpBit(PINN,7,BitPinN7);
#endif
#endif



#ifdef PINO
#ifdef BitPinO0
ioHelperCpBit(PINO,0,BitPinO0);
#endif
#ifdef BitPinO1
ioHelperCpBit(PINO,1,BitPinO1);
#endif
#ifdef BitPinO2
ioHelperCpBit(PINO,2,BitPinO2);
#endif
#ifdef BitPinO3
ioHelperCpBit(PINO,3,BitPinO3);
#endif
#ifdef BitPinO4
ioHelperCpBit(PINO,4,BitPinO4);
#endif
#ifdef BitPinO5
ioHelperCpBit(PINO,5,BitPinO5);
#endif
#ifdef BitPinO6
ioHelperCpBit(PINO,6,BitPinO6);
#endif
#ifdef BitPinO7
ioHelperCpBit(PINO,7,BitPinO7);
#endif
#endif



#ifdef PINP
#ifdef BitPinP0
ioHelperCpBit(PINP,0,BitPinP0);
#endif
#ifdef BitPinP1
ioHelperCpBit(PINP,1,BitPinP1);
#endif
#ifdef BitPinP2
ioHelperCpBit(PINP,2,BitPinP2);
#endif
#ifdef BitPinP3
ioHelperCpBit(PINP,3,BitPinP3);
#endif
#ifdef BitPinP4
ioHelperCpBit(PINP,4,BitPinP4);
#endif
#ifdef BitPinP5
ioHelperCpBit(PINP,5,BitPinP5);
#endif
#ifdef BitPinP6
ioHelperCpBit(PINP,6,BitPinP6);
#endif
#ifdef BitPinP7
ioHelperCpBit(PINP,7,BitPinP7);
#endif
#endif



#ifdef PINQ
#ifdef BitPinQ0
ioHelperCpBit(PINQ,0,BitPinQ0);
#endif
#ifdef BitPinQ1
ioHelperCpBit(PINQ,1,BitPinQ1);
#endif
#ifdef BitPinQ2
ioHelperCpBit(PINQ,2,BitPinQ2);
#endif
#ifdef BitPinQ3
ioHelperCpBit(PINQ,3,BitPinQ3);
#endif
#ifdef BitPinQ4
ioHelperCpBit(PINQ,4,BitPinQ4);
#endif
#ifdef BitPinQ5
ioHelperCpBit(PINQ,5,BitPinQ5);
#endif
#ifdef BitPinQ6
ioHelperCpBit(PINQ,6,BitPinQ6);
#endif
#ifdef BitPinQ7
ioHelperCpBit(PINQ,7,BitPinQ7);
#endif
#endif



#ifdef PINR
#ifdef BitPinR0
ioHelperCpBit(PINR,0,BitPinR0);
#endif
#ifdef BitPinR1
ioHelperCpBit(PINR,1,BitPinR1);
#endif
#ifdef BitPinR2
ioHelperCpBit(PINR,2,BitPinR2);
#endif
#ifdef BitPinR3
ioHelperCpBit(PINR,3,BitPinR3);
#endif
#ifdef BitPinR4
ioHelperCpBit(PINR,4,BitPinR4);
#endif
#ifdef BitPinR5
ioHelperCpBit(PINR,5,BitPinR5);
#endif
#ifdef BitPinR6
ioHelperCpBit(PINR,6,BitPinR6);
#endif
#ifdef BitPinR7
ioHelperCpBit(PINR,7,BitPinR7);
#endif
#endif



#ifdef PINS
#ifdef BitPinS0
ioHelperCpBit(PINS,0,BitPinS0);
#endif
#ifdef BitPinS1
ioHelperCpBit(PINS,1,BitPinS1);
#endif
#ifdef BitPinS2
ioHelperCpBit(PINS,2,BitPinS2);
#endif
#ifdef BitPinS3
ioHelperCpBit(PINS,3,BitPinS3);
#endif
#ifdef BitPinS4
ioHelperCpBit(PINS,4,BitPinS4);
#endif
#ifdef BitPinS5
ioHelperCpBit(PINS,5,BitPinS5);
#endif
#ifdef BitPinS6
ioHelperCpBit(PINS,6,BitPinS6);
#endif
#ifdef BitPinS7
ioHelperCpBit(PINS,7,BitPinS7);
#endif
#endif



#ifdef PINT
#ifdef BitPinT0
ioHelperCpBit(PINT,0,BitPinT0);
#endif
#ifdef BitPinT1
ioHelperCpBit(PINT,1,BitPinT1);
#endif
#ifdef BitPinT2
ioHelperCpBit(PINT,2,BitPinT2);
#endif
#ifdef BitPinT3
ioHelperCpBit(PINT,3,BitPinT3);
#endif
#ifdef BitPinT4
ioHelperCpBit(PINT,4,BitPinT4);
#endif
#ifdef BitPinT5
ioHelperCpBit(PINT,5,BitPinT5);
#endif
#ifdef BitPinT6
ioHelperCpBit(PINT,6,BitPinT6);
#endif
#ifdef BitPinT7
ioHelperCpBit(PINT,7,BitPinT7);
#endif
#endif



#ifdef PINU
#ifdef BitPinU0
ioHelperCpBit(PINU,0,BitPinU0);
#endif
#ifdef BitPinU1
ioHelperCpBit(PINU,1,BitPinU1);
#endif
#ifdef BitPinU2
ioHelperCpBit(PINU,2,BitPinU2);
#endif
#ifdef BitPinU3
ioHelperCpBit(PINU,3,BitPinU3);
#endif
#ifdef BitPinU4
ioHelperCpBit(PINU,4,BitPinU4);
#endif
#ifdef BitPinU5
ioHelperCpBit(PINU,5,BitPinU5);
#endif
#ifdef BitPinU6
ioHelperCpBit(PINU,6,BitPinU6);
#endif
#ifdef BitPinU7
ioHelperCpBit(PINU,7,BitPinU7);
#endif
#endif



#ifdef PINV
#ifdef BitPinV0
ioHelperCpBit(PINV,0,BitPinV0);
#endif
#ifdef BitPinV1
ioHelperCpBit(PINV,1,BitPinV1);
#endif
#ifdef BitPinV2
ioHelperCpBit(PINV,2,BitPinV2);
#endif
#ifdef BitPinV3
ioHelperCpBit(PINV,3,BitPinV3);
#endif
#ifdef BitPinV4
ioHelperCpBit(PINV,4,BitPinV4);
#endif
#ifdef BitPinV5
ioHelperCpBit(PINV,5,BitPinV5);
#endif
#ifdef BitPinV6
ioHelperCpBit(PINV,6,BitPinV6);
#endif
#ifdef BitPinV7
ioHelperCpBit(PINV,7,BitPinV7);
#endif
#endif



#ifdef PINW
#ifdef BitPinW0
ioHelperCpBit(PINW,0,BitPinW0);
#endif
#ifdef BitPinW1
ioHelperCpBit(PINW,1,BitPinW1);
#endif
#ifdef BitPinW2
ioHelperCpBit(PINW,2,BitPinW2);
#endif
#ifdef BitPinW3
ioHelperCpBit(PINW,3,BitPinW3);
#endif
#ifdef BitPinW4
ioHelperCpBit(PINW,4,BitPinW4);
#endif
#ifdef BitPinW5
ioHelperCpBit(PINW,5,BitPinW5);
#endif
#ifdef BitPinW6
ioHelperCpBit(PINW,6,BitPinW6);
#endif
#ifdef BitPinW7
ioHelperCpBit(PINW,7,BitPinW7);
#endif
#endif



#ifdef PINX
#ifdef BitPinX0
ioHelperCpBit(PINX,0,BitPinX0);
#endif
#ifdef BitPinX1
ioHelperCpBit(PINX,1,BitPinX1);
#endif
#ifdef BitPinX2
ioHelperCpBit(PINX,2,BitPinX2);
#endif
#ifdef BitPinX3
ioHelperCpBit(PINX,3,BitPinX3);
#endif
#ifdef BitPinX4
ioHelperCpBit(PINX,4,BitPinX4);
#endif
#ifdef BitPinX5
ioHelperCpBit(PINX,5,BitPinX5);
#endif
#ifdef BitPinX6
ioHelperCpBit(PINX,6,BitPinX6);
#endif
#ifdef BitPinX7
ioHelperCpBit(PINX,7,BitPinX7);
#endif
#endif



#ifdef PINY
#ifdef BitPinY0
ioHelperCpBit(PINY,0,BitPinY0);
#endif
#ifdef BitPinY1
ioHelperCpBit(PINY,1,BitPinY1);
#endif
#ifdef BitPinY2
ioHelperCpBit(PINY,2,BitPinY2);
#endif
#ifdef BitPinY3
ioHelperCpBit(PINY,3,BitPinY3);
#endif
#ifdef BitPinY4
ioHelperCpBit(PINY,4,BitPinY4);
#endif
#ifdef BitPinY5
ioHelperCpBit(PINY,5,BitPinY5);
#endif
#ifdef BitPinY6
ioHelperCpBit(PINY,6,BitPinY6);
#endif
#ifdef BitPinY7
ioHelperCpBit(PINY,7,BitPinY7);
#endif
#endif



#ifdef PINZ
#ifdef BitPinZ0
ioHelperCpBit(PINZ,0,BitPinZ0);
#endif
#ifdef BitPinZ1
ioHelperCpBit(PINZ,1,BitPinZ1);
#endif
#ifdef BitPinZ2
ioHelperCpBit(PINZ,2,BitPinZ2);
#endif
#ifdef BitPinZ3
ioHelperCpBit(PINZ,3,BitPinZ3);
#endif
#ifdef BitPinZ4
ioHelperCpBit(PINZ,4,BitPinZ4);
#endif
#ifdef BitPinZ5
ioHelperCpBit(PINZ,5,BitPinZ5);
#endif
#ifdef BitPinZ6
ioHelperCpBit(PINZ,6,BitPinZ6);
#endif
#ifdef BitPinZ7
ioHelperCpBit(PINZ,7,BitPinZ7);
#endif
#endif

}
