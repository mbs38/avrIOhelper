#include <avr/io.h>
#include "io-helper.h"

int main(void) {
	ioHelperIoConf();
	while(1) {
	    ioHelperSetOuts(); //write data from outStates to ports
	    ioHelperReadPins(); //read pins, arrange data into inStates
		ioHelperDebounce();
		
		//read a specific bit from inStates
		if(ioHelperReadBit(inStates,BitPinC5)) {
			//input on PortC, Bit 5 is high
			;
		}

		//write a bit to outstates
		ioHelperSetBit(outStates,BitPB1,1); //write 1
		ioHelperSetOuts();
		ioHelperSetBit(outStates,BitPB1,0); //write 0

	}
}
