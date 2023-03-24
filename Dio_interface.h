#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


#define   Dio_Pin_A0 0
#define   Dio_Pin_A1 1
#define   Dio_Pin_A2 2
#define   Dio_Pin_A3 3
#define   Dio_Pin_A4 4
#define   Dio_Pin_A5 5
#define   Dio_Pin_A6 6
#define   Dio_Pin_A7 7

#define   Dio_Pin_B0 8
#define   Dio_Pin_B1 9
#define   Dio_Pin_B2 10
#define   Dio_Pin_B3 11
#define   Dio_Pin_B4 12
#define   Dio_Pin_B5 13
#define   Dio_Pin_B6 14
#define   Dio_Pin_B7 15

#define   Dio_Pin_C0 16
#define   Dio_Pin_C1 17
#define   Dio_Pin_C2 18
#define   Dio_Pin_C3 19
#define   Dio_Pin_C4 20
#define   Dio_Pin_C5 21
#define   Dio_Pin_C6 22
#define   Dio_Pin_C7 23

#define   Dio_Pin_D0 24
#define   Dio_Pin_D1 25
#define   Dio_Pin_D2 26
#define   Dio_Pin_D3 27
#define   Dio_Pin_D4 28
#define   Dio_Pin_D5 29
#define   Dio_Pin_D6 30
#define   Dio_Pin_D7 31

#define   Dio_Pin_E0 32
#define   Dio_Pin_E1 33
#define   Dio_Pin_E2 34
#define   Dio_Pin_E3 35
#define   Dio_Pin_E4 36
#define   Dio_Pin_E5 37

#define   Dio_Pin_F0 40
#define   Dio_Pin_F1 41
#define   Dio_Pin_F2 42
#define   Dio_Pin_F3 43
#define   Dio_Pin_F4 44



#define Dio_Port_A       0
#define Dio_Port_B       1
#define Dio_Port_C       2
#define Dio_Port_D       3
#define Dio_Port_E       4
#define Dio_Port_F       5



#define Dio_Pin_HIGH 1
#define Dio_Pin_LOW  0







/******************************************************************************
* \Syntax          : void Dio_Write_Pin(U8 ChannelId,U8 Level)                                     
* \Description     : Write high or low on the required pin(channel)                                
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : channel id and channel level                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void Dio_Write_Pin(U8 ChannelId,U8 Level);
/******************************************************************************
* \Syntax          : void Dio_WritePort(U8 PortId,U8 Level)                                     
* \Description     : Write  the level value on the entire port                              
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : Port id and Port level                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void Dio_Write_Port(U8 PortId,U8 Level);

/******************************************************************************
* \Syntax          : U8 Dio_ReadChannel(U8 ChannelId)                                     
* \Description     : Read the value of the required pin(channel) and return it                             
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : channel id                     
* \Parameters (out): channel level                                                      
* \Return value:   : channel level 
*******************************************************************************/
U8 Dio_Read_Pin(U8 ChannelId);


/******************************************************************************
* \Syntax          : U8 Dio_ReadPort(U8 PortId)                                     
* \Description     : Read the value of the entire and return it                             
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Reentrant                                             
* \Parameters (in) : Port id                     
* \Parameters (out): Port level                                                      
* \Return value:   : Port level 
*******************************************************************************/
U16 Dio_Read_Port(U8 PortId);


/******************************************************************************
* \Syntax          : U16 Dio_FlipChannel(U8 ChannelId)                                     
* \Description     : change the value of the required pin(channel) from high to
                     low or vice versa and return the value after this change
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non-Reentrant                                             
* \Parameters (in) : channel id                     
* \Parameters (out): channel level                                                      
* \Return value:   : channel level 
*******************************************************************************/
U8 Dio_Flip_Pin(U8 ChannelId);







#endif
