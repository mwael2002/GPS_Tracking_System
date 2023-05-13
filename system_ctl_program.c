#include "STD_Types.h"
#include "Dio_interface.h"
#include "LED_interface.h"
#include "LCD_interface.h"
#include "Buzzer_interface.h"
#include "system_ctl_interface.h"

void system_ctl(S32 distance){
	if(distance<=0)
	{
		led(green,on);
		LCD_clear();
		LCD_write_string_pos("arrived",0,0);
		Buzzer(buzzer_pin,buzzer_on);
				
	}
	else if(distance<=5&&distance>0)
	{
		led(yellow,on);
		LCD_clear();
		LCD_write_string_pos("you are close",0,0);
	}
	else if(distance>=5){
	
		led(red,on);
		LCD_write_string_pos("Covered Dist.:",0,0);	
	}
}
