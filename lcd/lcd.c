#include <lcd.h>
#define ENABLE_PIN D0
#define RS_PIN D1
#define RW_PIN D2
#define Data4 D4
#define Data5 D5
#define Data6 D6
#define Data7 D7

#include <lcd.c>


void main()
{
   int k;


   lcd_init();

   lcd_putc("\f Ready...");

   for(k=0;k<5;k++)
   { lcd_gotoxy(1,0);
     printf(lcd_putc," %d",k);
     delay_ms(1000);
    }
   
   lcd_putc("\f \n HELLO WORLD!!");
}
