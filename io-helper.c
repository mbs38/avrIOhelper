#include <avr/io.h>
#include "io-helper.h"

uint32_t outStates = 0;

uint8_t getBit1(uint8_t bit) {
    if(outStates&(1<<bit)) return 1;
    else return 0;
}
uint8_t getBit0(uint8_t bit) {
    if(outStates&(1<<bit)) return 0;
    else return 1;
}

void ioConf(void) {
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
}


void setOuts(void) {

PORTB|=0
#ifdef BitPB0
|(getBit1(BitPB0)<<0)
#endif
#ifdef BitPB1
|(getBit1(BitPB1)<<1)
#endif
#ifdef BitPB2
|(getBit1(BitPB2)<<2)
#endif
#ifdef BitPB3
|(getBit1(BitPB3)<<3)
#endif
#ifdef BitPB4
|(getBit1(BitPB4)<<4)
#endif
#ifdef BitPB5
|(getBit1(BitPB5)<<5)
#endif
#ifdef BitPB6
|(getBit1(BitPB6)<<6)
#endif
#ifdef BitPB7
|(getBit1(BitPB7)<<7)
#endif
|0;


PORTB&=~(0
#ifdef BitPB0
|(getBit0(BitPB0)<<0)
#endif
#ifdef BitPB1
|(getBit0(BitPB1)<<1)
#endif
#ifdef BitPB2
|(getBit0(BitPB2)<<2)
#endif
#ifdef BitPB3
|(getBit0(BitPB3)<<3)
#endif
#ifdef BitPB4
|(getBit0(BitPB4)<<4)
#endif
#ifdef BitPB5
|(getBit0(BitPB5)<<5)
#endif
#ifdef BitPB6
|(getBit0(BitPB6)<<6)
#endif
#ifdef BitPB7
|(getBit0(BitPB7)<<7)
#endif
|0);


}
