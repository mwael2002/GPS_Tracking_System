#include "../../Libraries/STD_Types.h"
#include "Port_Interface.h"








Port_ConfigType PortConfigArr[43] = {
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*    Channel                   Direction                Mode                          External Interrupt      Attached_Resistor                      Current_Drive_Strength      Lock_Status    */
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

{     Pin_A0,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_PullUp,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_A1,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_A2,          Pin_Dir_Output,          Pin_Mode_Dio,     Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_A3,          Pin_Dir_Output,          Pin_Mode_Dio,     Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_A4,          Pin_Dir_Output,          Pin_Mode_Dio,      Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_A5,          Pin_Dir_Output,         Pin_Mode_Dio,      Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_A6,          Pin_Dir_Output,          Pin_Mode_Dio,     Pin_IntDisable,        Pin_InternalAttach_NoAttach,            Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_A7,          Pin_Dir_Output,          Pin_Mode_Dio,     Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Unlocked     },

{     Pin_B0,          Pin_Dir_Output,          Pin_Mode_Dio,        Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_B1,          Pin_Dir_Output,         Pin_Mode_Dio,        Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_B2,          Pin_Dir_Output,          Pin_Mode_Dio,     Pin_IntDisable,        Pin_InternalAttach_NoAttach,            Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_B3,          Pin_Dir_Output,          Pin_Mode_Dio,     Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_B4,          Pin_Dir_Output,         Pin_Mode_Dio,     Pin_IntDisable,        Pin_InternalAttach_NoAttach,            Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_B5,          Pin_Dir_Output,         Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_B6,          Pin_Dir_Output,          Pin_Mode_Dio,      Pin_IntDisable,        Pin_InternalAttach_NoAttach,            Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_B7,          Pin_Dir_Output,         Pin_Mode_Dio,      Pin_IntDisable,        Pin_InternalAttach_NoAttach,            Pin_CurrDrive_2mA,         Pin_Unlocked     },

{     Pin_C0,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_C1,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_C2,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_C3,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_C4,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,            Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_C5,          Pin_Dir_Output,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,            Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_C6,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_PullUp,            Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_C7,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_PullUp,            Pin_CurrDrive_2mA,         Pin_Locked     },

{     Pin_D0,          Pin_Dir_Output,          Pin_Mode_Dio,         Pin_IntDisable,        Pin_InternalAttach_NoAttach ,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_D1,          Pin_Dir_Output,          Pin_Mode_Dio,         Pin_IntDisable,        Pin_InternalAttach_NoAttach ,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_D2,          Pin_Dir_Output,          Pin_Mode_Dio,         Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_D3,          Pin_Dir_Output,         Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_D4,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_D5,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_D6,          Pin_Dir_Input,          Pin_Mode_D6_UART2_RX,    Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Unlocked     },
{     Pin_D7,          Pin_Dir_Output,         Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Unlocked     },

{     Pin_E0,          Pin_Dir_Output,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_E1,          Pin_Dir_Output,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_E2,          Pin_Dir_Output,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_E3,          Pin_Dir_Output,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_E4,          Pin_Dir_Output,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,         Pin_CurrDrive_2mA,         Pin_Locked     },
{     Pin_E5,          Pin_Dir_Input,          Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_OpenDrain,         Pin_CurrDrive_2mA,         Pin_Locked     },

{     Pin_F0,          Pin_Dir_Input,         Pin_Mode_Dio,          Pin_IntFallingEdge,     Pin_InternalAttach_PullUp,          Pin_CurrDrive_2mA,          Pin_Unlocked    },
{     Pin_F1,          Pin_Dir_Output,         Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_8mA,          Pin_Unlocked    },
{     Pin_F2,          Pin_Dir_Output,         Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_8mA,          Pin_Unlocked    },
{     Pin_F3,          Pin_Dir_Output,         Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_NoAttach,          Pin_CurrDrive_8mA,          Pin_Unlocked    },
{     Pin_F4,          Pin_Dir_Input,         Pin_Mode_Dio,          Pin_IntDisable,        Pin_InternalAttach_PullUp,          Pin_CurrDrive_2mA,          Pin_Unlocked    }

};