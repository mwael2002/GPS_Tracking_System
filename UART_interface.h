#ifndef UART_INTERFACE
#define UART_INTERFACE


void UART2_init(void);
U8 UART2_receive_char(void);
void UART2_receive_string(char *str);

#endif