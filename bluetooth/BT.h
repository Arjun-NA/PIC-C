#include <16F877A.h>
#device adc=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES HS                    	//High speed Osc (> 4mhz for PCM/PCH) (>10mhz for PCD)
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(clock=20000000)

#use FIXED_IO( B_outputs=PIN_B1,PIN_B0 )
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1,enable=PIN_C5)

