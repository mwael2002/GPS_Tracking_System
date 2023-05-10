#include"STD_Types.h"
#include"bit_calc.h"
#include"Dio_interface.h"
#include"LCD_interface.h"

U16 current_address;

void _delay_ms(U32 time_ms){
U16 i=0,j=0;
for(i=0;i<time_ms;i++){

for(j=0;j<16000;j++){
   }
 }

}

void _delay_us(U32 time_us){
U16 i=0,j=0;
for(i=0;i<time_us;i++){

for(j=0;j<16;j++){
   }
 }

}

void LCD_init(void){
    
	  _delay_ms(40);
    LCD_send_cmd(56);
    _delay_us(50);
    LCD_send_cmd(12);
    _delay_us(50);
    LCD_send_cmd(1);
    _delay_ms(2);

    current_address=0;

}
void LCD_clear(void){
	LCD_send_cmd(1);
}


void LCD_write_char(U8 Data){
  	Dio_Write_Pin(LCD_Rs_pin,Dio_Pin_HIGH);
		LCD_send_data(Data);
}

void LCD_write_string(const char* str){
		    U8 counter=0;
	
			while(str[counter]!='\0'){
				LCD_write_char(str[counter]);
				counter++; current_address++;
			}
}
void LCD_write_string_pos(const char* str,U8 y_pos,U8 x_pos){

			current_address=(x_pos+(y_pos*64));
			LCD_send_cmd(128+current_address);
			LCD_write_string(str);

}

void LCD_write_no(U32 num){
	U8 rem,counter=0;
	U8 j=0;
	S8 i;
		char str[20];
		char str_2[20];
		if(num==0){
			str_2[counter]='0';
			counter++;
			str_2[1]='\0';
		}
		else{
			while(num!=0){
		rem=num%10;
		str[counter]=rem+'0';
		counter++;
		num=num/10;
		}
			str[counter]='\0';
			
			for(i=(counter-1);i>=0;i--){
				str_2[j]=str[i];
				j++;
			}
			str_2[j]='\0';
		}
		LCD_write_string(str_2);
}
void LCD_write_no_pos(U32 num,U8 y_pos, U8 x_pos){
	U8 rem,counter=0;
	U8 j=0;
	S8 i;
	char str[20];
	char str_2[20];
	if(num==0){
		str_2[counter]='0';
		counter++;
		str_2[1]='\0';
	}
	else{
		while(num!=0){
	rem=num%10;
	str[counter]=rem+'0';
	counter++;
	num=num/10;
	}
		str[counter]='\0';

		for(i=(counter-1);i>=0;i--){
			str_2[j]=str[i];
			j++;
		}
		str_2[j]='\0';
	}
	LCD_write_string_pos(str_2,y_pos,x_pos);
}

void LCD_write_float_no_pos(F64 no,U8 y_pos, U8 x_pos){

U32 int_no=(U32) no;	
U32 after_decimal=(no-int_no)*1000000;	
	
LCD_write_no_pos(int_no,y_pos,x_pos);
LCD_write_string(".");
LCD_write_no(after_decimal);


}


static void LCD_send_data(U8 data){
	Dio_Write_Pin(LCD_Rw_pin,Dio_Pin_LOW);
	Dio_Write_Port(LCD_data_port,data);
	Dio_Write_Pin(LCD_E_pin,Dio_Pin_HIGH);
	_delay_ms(1);
	Dio_Write_Pin(LCD_E_pin,Dio_Pin_LOW);
}
static void LCD_send_cmd(U8 cmd){
	Dio_Write_Pin(LCD_Rs_pin,Dio_Pin_LOW);
	LCD_send_data(cmd);
}
