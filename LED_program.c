#include "STD_Types.h"
#include "Dio_interface.h"
#include "LED.h"



void led (U8 color,U8 play)
{
	if((color==red)&&(play==on))
	{
		Dio_Write_Pin(Dio_Pin_F1,Dio_Pin_HIGH);
		Dio_Write_Pin(Dio_Pin_F2,Dio_Pin_LOW);
		Dio_Write_Pin(Dio_Pin_F3,Dio_Pin_LOW);
	}
	
	else if((color==green)&&(play==on))
	{
		Dio_Write_Pin(Dio_Pin_F3,Dio_Pin_HIGH);
		Dio_Write_Pin(Dio_Pin_F1,Dio_Pin_LOW);
		Dio_Write_Pin(Dio_Pin_F2,Dio_Pin_LOW);
	}
	
	else if((color=yellow)&&(play==on))
	{
		Dio_Write_Pin(Dio_Pin_F3,Dio_Pin_HIGH);
		Dio_Write_Pin(Dio_Pin_F2,Dio_Pin_LOW);
		Dio_Write_Pin(Dio_Pin_F1,Dio_Pin_HIGH);
	}
	else
	{
		Dio_Write_Pin(Dio_Pin_F1,Dio_Pin_LOW);
		Dio_Write_Pin(Dio_Pin_F2,Dio_Pin_LOW);
		Dio_Write_Pin(Dio_Pin_F3,Dio_Pin_LOW);
	}
}