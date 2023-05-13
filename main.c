#include "STD_Types.h"
#include "bit_calc.h"
#include "port_interface.h"
#include "UART_interface.h" 
#include "systick_interface.h"
#include "LCD_interface.h"
#include "distance_accumulator_interface.h"
#include "system_ctl_interface.h"	
#include "disKeypad_interface.h"


int main(void){

char data[200];	
F64 dist=0;
U16 counter=0,total_dist;
	
Port_init();
LCD_init();	
	
total_dist=disKeyPad();	
LCD_write_string_pos("Covered Dist.:",0,0);
LCD_write_float_no_pos(dist,1,0);
	
UART2_init();
sys_init(1000);
	
while(1){
	
	while(sys_finish_count()!=FINISH);
	
	counter+=1;
	if(counter==5){
 		UART2_receive_string(data);
		dist=acc_dist(data);
	  system_ctl((total_dist-dist));
	  LCD_write_float_no_pos(dist,1,0);
		counter=0;
	}
	
	
  }

}
	
