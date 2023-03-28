#include "STD_Types.h"
#include "Dio_interface.h"
#include "LED.h"


int main ()
{




}

void led (U8 color,U8 play)
{
	if((color==red)&&(play==on))
	{
		Dio_Write_Pin(Dio_Pin_F1,high);
		Dio_Write_Pin(Dio_Pin_F2,low);
		Dio_Write_Pin(Dio_Pin_F3,low);
	}
	
	else if((color==green)&&(play==on))
	{
		Dio_Write_Pin(Dio_Pin_F3,high);
		Dio_Write_Pin(Dio_Pin_F1,low);
		Dio_Write_Pin(Dio_Pin_F2,low);
	}
	
	else if((color=yellow)&&(play==on))
	{
		Dio_Write_Pin(Dio_Pin_F3,high);
		Dio_Write_Pin(Dio_Pin_F2,low);
		Dio_Write_Pin(Dio_Pin_F1,high);
	}
	else
	{
		Dio_Write_Pin(Dio_Pin_F1,low);
		Dio_Write_Pin(Dio_Pin_F2,low);
		Dio_Write_Pin(Dio_Pin_F3,low);
	}
}