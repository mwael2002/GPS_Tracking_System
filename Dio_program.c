#include "STD_Types.h"
#include "bit_calc.h"
#include "Mcu_Hw.h"
#include "Dio_interface.h"

U32 offset_addresses[8]={0x04,0x08,0x10,0x20,0x40,0x80,0x100,0x200};

void Dio_Write_Pin(U8 PinId,U8 Level){
U8 portid = PinId / 8;
U8 Pin = PinId % 8;
volatile U32* Address_Data_Pin;
	
	switch(portid){
		case Dio_Port_A:
		Address_Data_Pin= GPIO_PORTA_DATA_BITS_R;	
		break;
		case Dio_Port_B:
		Address_Data_Pin= GPIO_PORTB_DATA_BITS_R;
		break;
		case Dio_Port_C:
		Address_Data_Pin= GPIO_PORTC_DATA_BITS_R;
		break;
		case Dio_Port_D:
		Address_Data_Pin= GPIO_PORTD_DATA_BITS_R;
		break;
		case Dio_Port_E:
        Address_Data_Pin= GPIO_PORTE_DATA_BITS_R;			
		break;
		case Dio_Port_F:
		Address_Data_Pin= GPIO_PORTF_DATA_BITS_R;
		break;
   }
	   //Writing on Pin using bit masking
	   Address_Data_Pin += offset_addresses[Pin]/4;
		*Address_Data_Pin= (Level<<Pin);	
}


void Dio_Write_Port(U8 PortId,U8 Level){
    switch(PortId){
			case Dio_Port_A:
				PORTA->GPIO_DATA_R=Level;
			break;
		  case Dio_Port_B:
				PORTB->GPIO_DATA_R=Level;
			break;
			case Dio_Port_C:
				PORTC->GPIO_DATA_R=Level;
			break;
			case Dio_Port_D:
				PORTD->GPIO_DATA_R=Level;
			break;
			case Dio_Port_E:
				PORTE->GPIO_DATA_R=Level;
			break;
			case Dio_Port_F:
				PORTF->GPIO_DATA_R=Level;
			break;
   }
}
U8 Dio_Read_Pin(U8 PinId){
	
U8 portid = PinId / 8;
U8 Pin = PinId % 8;
volatile U32* Address_Data_Pin;
	
	switch(portid){
		case Dio_Port_A:
		Address_Data_Pin= GPIO_PORTA_DATA_BITS_R;		
		break;
		case Dio_Port_B:
		Address_Data_Pin= GPIO_PORTB_DATA_BITS_R;			
		break;
		case Dio_Port_C:
		Address_Data_Pin= GPIO_PORTC_DATA_BITS_R;			
		break;
		case Dio_Port_D:
		Address_Data_Pin= GPIO_PORTD_DATA_BITS_R;		
		break;
		case Dio_Port_E:
        Address_Data_Pin= GPIO_PORTE_DATA_BITS_R;			
		break;
		case Dio_Port_F:
		Address_Data_Pin= GPIO_PORTF_DATA_BITS_R;
		break;
   }
	//Reading Pin using bit masking
	Address_Data_Pin += offset_addresses[Pin]/4;
	return (*Address_Data_Pin>>Pin); 
}

