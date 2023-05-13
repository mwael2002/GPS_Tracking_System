#include "STD_Types.h"
#include "Dio_interface.h"
#include "Buzzer_interface.h"


void Buzzer(U8 Buzzer_Pin,U8 state){
	
	if(state){
		Dio_Write_Pin(buzzer_pin,Dio_Pin_HIGH);		
	}
	else{
			Dio_Write_Pin(buzzer_pin,Dio_Pin_LOW);		

	}
	

}

