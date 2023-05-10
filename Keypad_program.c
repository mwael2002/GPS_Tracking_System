#include "STD_Types.h"
#include "DIO_interface.h"
#include "Port_interface.h"
#include "Keypad_interface.h"


U8 Column_index,Row_index,Pin_state;
U8 Pressed_key=No_pressed_key;
static U8 Rows_pins[Row_no]={Row_pin_0,Row_pin_1,Row_pin_2,Row_pin_3};
static U8 Column_pins[Column_no]={Column_pin_0,Column_pin_1,Column_pin_2,Column_pin_3};
static U8 Keypad_arr[Row_no][Column_no]=Keypad_values;


void KPD_init(void){
	U8 Column_count,Row_count;
	
	for(Column_count=0;Column_count<Column_no;Column_count++){
	
	Dio_Write_Pin(Column_pins[Column_count],Dio_Pin_HIGH);
		
	}
	

}

U8 KPD_status(void){
for(Column_index =0 ; Column_index <Column_no; Column_index++){
	Dio_Write_Pin(Column_pins[Column_index],Dio_Pin_LOW);
	for(Row_index=0 ; Row_index < Row_no ; Row_index++){
      Pin_state=Dio_Read_Pin(Rows_pins[Row_index]);
      if(Pin_state==Dio_Pin_LOW){
    	  Pressed_key=Keypad_arr[Row_index][Column_index];
    	  while(Pin_state==Dio_Pin_LOW){
    		  Pin_state=Dio_Read_Pin(Rows_pins[Row_index]);
    	  }
    	  return  Pressed_key;
      }
	}
	Dio_Write_Pin(Column_pins[Column_index],Dio_Pin_HIGH);
}
return No_pressed_key;
}

