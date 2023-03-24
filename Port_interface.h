#ifndef PORT_INTERFACE
#define PORT_INTERFACE

#include "../../Libraries/STD_Types.h"


#define Pin_Mode_Dio                 0
#define Pin_Mode_AIN                 16


#define Pin_Mode_C4_UART4_RX           1
#define Pin_Mode_C5_UART4_TX           1

#define Pin_Mode_D6_UART2_RX           1
#define Pin_Mode_D7_UART2_TX           1



#define    Pin_A0 0
#define    Pin_A1 1
#define    Pin_A2 2
#define    Pin_A3 3
#define    Pin_A4 4
#define    Pin_A5 5
#define    Pin_A6 6
#define    Pin_A7 7

#define    Pin_B0 8
#define    Pin_B1 9
#define    Pin_B2 10
#define    Pin_B3 11
#define    Pin_B4 12
#define    Pin_B5 13
#define    Pin_B6 14
#define    Pin_B7 15

#define    Pin_C0 16
#define    Pin_C1 17
#define    Pin_C2 18
#define    Pin_C3 19
#define    Pin_C4 20
#define    Pin_C5 21
#define    Pin_C6 22
#define    Pin_C7 23

#define    Pin_D0 24
#define    Pin_D1 25
#define    Pin_D2 26
#define    Pin_D3 27
#define    Pin_D4 28
#define    Pin_D5 29
#define    Pin_D6 30
#define    Pin_D7 31

#define    Pin_E0 32
#define    Pin_E1 33
#define    Pin_E2 34
#define    Pin_E3 35
#define    Pin_E4 36
#define    Pin_E5 37

#define    Pin_F0 40
#define    Pin_F1 41
#define    Pin_F2 42
#define    Pin_F3 43
#define    Pin_F4 44

   


#define    Port_Id_A 0
#define    Port_Id_B 1
#define    Port_Id_C 2
#define    Port_Id_D 3
#define    Port_Id_E 4
#define    Port_Id_F 5


#define    Pin_Dir_Input  0
#define    Pin_Dir_Output 1



#define    Pin_IntDisable       0
#define    Pin_IntFallingEdge   1
#define    Pin_IntRisingEdge    2
#define    Pin_IntBothEdges     3
#define    Pin_IntLowLevel      4
#define    Pin_IntHighLevel     5


#define    Pin_Unlocked 0
#define    Pin_Locked   1




#define     Pin_InternalAttach_NoAttach   0
#define     Pin_InternalAttach_PullUp     1
#define     Pin_InternalAttach_PullDown   2
#define     Pin_InternalAttach_OpenDrain  3




#define     Pin_CurrDrive_2mA  0
#define     Pin_CurrDrive_4mA  1
#define     Pin_CurrDrive_8mA  2



typedef struct
{
    U8         Pin;
    U8         Dir;
    U8         Mode;
    U8         Interrupt;
    U8         Attach;
    U8         CurrentDrive;
    U8         LockStatus;
}Port_ConfigType;

/******************************************************************************
* \Syntax          : void Port_init(void)                                    
* \Description     : Initialize Channels direction, GPIO Mode, GPIO interrupts , current
                     strength and unlock channels                                
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non-Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void Port_init(void);

#endif