#include <BT.h>


void main()
{ int uart_rd;

   while(TRUE)
   {
      uart_rd = getc();
      if(uart_rd=='1')
      OUTPUT_HIGH(pin_B0);
      else if(uart_rd=='0')
      OUTPUT_LOW(pin_B0);
     
   }

}
