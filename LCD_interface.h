#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

#define LCD_Rs_pin            Dio_Pin_A5
#define LCD_Rw_pin            Dio_Pin_A6
#define LCD_E_pin             Dio_Pin_A7

#define LCD_data_port         Dio_Port_B

void _delay_ms(U32 time_ms);
void _delay_us(U32 time_us);


static void LCD_send_data(U8 data);
static void LCD_send_cmd(U8 cmd);

void LCD_init(void);
void LCD_clear(void);


void LCD_write_char(U8 character);
void LCD_write_string(const char* str);
void LCD_write_string_pos(const char* string,U8 y_pos,U8 x_pos);
void LCD_write_no(U32 num);
void LCD_write_no_pos(U32 num,U8 y_pos,U8 x_pos);
void LCD_write_float_no_pos(F64 no,U8 y_pos, U8 x_pos);

#endif /* LCD_INTERFACE_H_ */
