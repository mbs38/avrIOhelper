extern volatile uint32_t outStates;
extern volatile uint32_t inStates;
void setOuts(void);
void readPins(void);
void ioConf(void);


//Outputs
//Pin | Bit in outStates
#define BitPB0 13
#define BitPB1 12

//Inputs
//Pin | Bit in inStates
#define BitPinC1 0
#define BitPinC5 1
