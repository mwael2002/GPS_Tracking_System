#include "STD_Types.h"
#include "bit_calc.h"
#include "Mcu_Hw.h"
#include "UART_interface.h"

void UART2_init(void){

	   set_bit(SYSCTL_RCGCUART_R,2);
	   while(get_bit(SYSCTL_PRUART_R,2)==0);
	
	
	   clear_bit(UART2_CTL_R,0);
	
     UART2_IBRD_R=104;
	   UART2_FBRD_R=11;
	
	   set_bit(UART2_LCRH_R,5);
     set_bit(UART2_LCRH_R,6);
	
	   set_bit(UART2_LCRH_R,4);
	   
	   clear_bit(UART2_CC_R,3);
	   clear_bit(UART2_CC_R,2);
	   clear_bit(UART2_CC_R,1);
     clear_bit(UART2_CC_R,0);
	
	   set_bit(UART2_CTL_R,9);
	   clear_bit(UART2_CTL_R,8);
		 
		 set_bit(UART2_CTL_R,0);

}


U8 UART2_receive_char(void){

	U8 data;
data=UART2_DR_R;
while(get_bit(UART2_FR_R,4)==1);
return data;

}

void UART2_receive_string(char *str){
U16 counter;
U8 temp;
	
	temp=UART2_receive_char();
	
	while(1){
	  if(temp=='L' && UART2_receive_char()=='L'){
		   for(counter=0;counter<25;counter++){
		   
		      str[counter]=UART2_receive_char();
		
		}
          str[counter]='\0';		  
			break;
		}
		
	  temp=UART2_receive_char();	
	}	

	
}


