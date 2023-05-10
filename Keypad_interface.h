#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

#define No_pressed_key 250

#define Row_no 4
#define Column_no 4

#define Row_pin_0      Dio_Pin_C7
#define Row_pin_1      Dio_Pin_C6
#define Row_pin_2      Dio_Pin_C5
#define Row_pin_3      Dio_Pin_C4
#define Column_pin_0   Dio_Pin_D7
#define Column_pin_1   Dio_Pin_A2
#define Column_pin_2   Dio_Pin_A3
#define Column_pin_3   Dio_Pin_A4

#define Keypad_values {{1,2,3,10},{4,5,6,11},{7,8,9,12},{14,0,15,13}}

U8 KPD_status(void);
void KPD_init(void);

#endif 
