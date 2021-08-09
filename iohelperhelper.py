import string

ddr="""#ifdef DDRA
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

"""

port="""
#ifdef PORTA
PORTA|=0
#ifdef BitPA0
|(getBit1(BitPA0)<<0)
#endif
#ifdef BitPA1
|(getBit1(BitPA1)<<1)
#endif
#ifdef BitPA2
|(getBit1(BitPA2)<<2)
#endif
#ifdef BitPA3
|(getBit1(BitPA3)<<3)
#endif
#ifdef BitPA4
|(getBit1(BitPA4)<<4)
#endif
#ifdef BitPA5
|(getBit1(BitPA5)<<5)
#endif
#ifdef BitPA6
|(getBit1(BitPA6)<<6)
#endif
#ifdef BitPA7
|(getBit1(BitPA7)<<7)
#endif
|0;

PORTA&=~(0
#ifdef BitPA0
|(getBit0(BitPA0)<<0)
#endif
#ifdef BitPA1
|(getBit0(BitPA1)<<1)
#endif
#ifdef BitPA2
|(getBit0(BitPA2)<<2)
#endif
#ifdef BitPA3
|(getBit0(BitPA3)<<3)
#endif
#ifdef BitPA4
|(getBit0(BitPA4)<<4)
#endif
#ifdef BitPA5
|(getBit0(BitPA5)<<5)
#endif
#ifdef BitPA6
|(getBit0(BitPA6)<<6)
#endif
#ifdef BitPA7
|(getBit0(BitPA7)<<7)
#endif
|0);
#endif

"""

pin="""
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

"""

port_letters=list(string.ascii_uppercase);

allddr=[]
for x in range(0,len(port_letters)):
    allddr.append(ddr)
    allddr[x]=allddr[x].replace("DDRA","DDR"+port_letters[x])
    allddr[x]=allddr[x].replace("BitPA","BitP"+port_letters[x])

allport=[]
for x in range(0,len(port_letters)):
    allport.append(port)
    allport[x]=allport[x].replace("PORTA","PORT"+port_letters[x])
    allport[x]=allport[x].replace("BitPA","BitP"+port_letters[x])

allpin=[]
for x in range(0,len(port_letters)):
    allpin.append(pin)
    allpin[x]=allpin[x].replace("PINA","PIN"+port_letters[x])
    allpin[x]=allpin[x].replace("BitPinA","BitPin"+port_letters[x])


for x in allddr:
    #print(x)
    pass

for x in allport:
    #print(x)
    pass

for x in allpin:
    print(x)
    pass
