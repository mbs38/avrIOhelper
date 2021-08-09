#include <avr/io.h>
#include "io-helper.h"

int main(void) {

outStates=0xFFFFFFFF;

while(1) {
    setOuts();
    readPins();
}

}
