#ifndef MCU_HW_H_
#define MCU_HW_H

//GPIO
typedef struct{
U32 GPIO_DATA_R;
U32 GPIO_DIR_R;       
U32 GPIO_IS_R;
U32 GPIO_IBE_R;
U32 GPIO_IEV_R;
U32 GPIO_IM_R;        
U32 GPIO_RIS_R;
U32 GPIO_MIS_R;
U32 GPIO_ICR_R;
U32 GPIO_AFSEL_R;

U8 Reserved_2[0xDC];

U32 GPIO_DR2R_R;      
U32 GPIO_DR4R_R;       
U32 GPIO_DR8R_R;       
U32 GPIO_ODR_R;        
U32 GPIO_PUR_R;        
U32 GPIO_PDR_R;        
U32 GPIO_SLR_R;     
U32 GPIO_DEN_R;        
U32 GPIO_LOCK_R;      
U32 GPIO_CR_R;         
U32 GPIO_AMSEL_R;    
U32 GPIO_PCTL_R;     
U32 GPIO_ADCCTL_R;     
U32 GPIO_DMACTL_R;     
}GPIO_Register;




#define PORTA               ((volatile GPIO_Register*)0x400043FC)    
#define PORTB               ((volatile GPIO_Register*)0x400053FC) 
#define PORTC               ((volatile GPIO_Register*)0x400063FC) 
#define PORTD               ((volatile GPIO_Register*)0x400073FC) 
#define PORTE               ((volatile GPIO_Register*)0x400243FC) 
#define PORTF               ((volatile GPIO_Register*)0x400253FC) 





#define	GPIO_PORTA_DATA_BITS_R  ((volatile U32*)0x40004000)
#define GPIO_PORTB_DATA_BITS_R  ((volatile U32*)0x40005000)
#define GPIO_PORTC_DATA_BITS_R  ((volatile U32*)0x40006000)
#define GPIO_PORTD_DATA_BITS_R  ((volatile U32*)0x40007000)
#define GPIO_PORTE_DATA_BITS_R  ((volatile U32*)0x40024000)
#define GPIO_PORTF_DATA_BITS_R  ((volatile U32*)0x40025000)





/*******************************************************************************/

// SYSTEM CLOCK
#define SYSCTL_RCGCTIMER_R      (*((volatile U32 *)0x400FE604))
#define SYSCTL_RCGCGPIO_R       (*((volatile U32 *)0x400FE608))
#define SYSCTL_RCGCUART_R       (*((volatile U32 *)0x400FE618))


#define SYSCTL_PRTIMER_R        (*((volatile U32 *)0x400FEA04))
#define SYSCTL_PRGPIO_R         (*((volatile U32 *)0x400FEA08))
#define SYSCTL_PRUART_R         (*((volatile U32 *)0x400FEA18))



//NVIC
#define NVIC_ENABLE_BASE_ADDRESS         0xE000E100
#define NVIC_PRI_BASE_ADDRESS            0xE000E400
#define APINT                            (*((volatile U32*)0xE000ED0C))

// SYSTICK
#define NVIC_ACTLR_R                     (*((volatile U32*)0xE000E008))
#define NVIC_ST_CTRL_R                   (*((volatile U32*)0xE000E010))
#define NVIC_ST_RELOAD_R                 (*((volatile U32*)0xE000E014))
#define NVIC_ST_CURRENT_R                (*((volatile U32*)0xE000E018))



//TIMER0
#define TIMER0_CFG_R            (*((volatile U32*)0x40030000))
#define TIMER0_TAMR_R           (*((volatile U32*)0x40030004))
#define TIMER0_TBMR_R           (*((volatile U32*)0x40030008))
#define TIMER0_CTL_R            (*((volatile U32*)0x4003000C))
#define TIMER0_SYNC_R           (*((volatile U32*)0x40030010))
#define TIMER0_IMR_R            (*((volatile U32*)0x40030018))
#define TIMER0_RIS_R            (*((volatile U32*)0x4003001C))
#define TIMER0_MIS_R            (*((volatile U32*)0x40030020))
#define TIMER0_ICR_R            (*((volatile U32*)0x40030024))
#define TIMER0_TAILR_R          (*((volatile U32*)0x40030028))
#define TIMER0_TBILR_R          (*((volatile U32*)0x4003002C))
#define TIMER0_TAMATCHR_R       (*((volatile U32 *)0x40030030))
#define TIMER0_TBMATCHR_R       (*((volatile U32*)0x40030034))
#define TIMER0_TAPR_R           (*((volatile U32*)0x40030038))
#define TIMER0_TBPR_R           (*((volatile U32*)0x4003003C))
#define TIMER0_TAPMR_R          (*((volatile U32*)0x40030040))
#define TIMER0_TBPMR_R          (*((volatile U32*)0x40030044))
#define TIMER0_TAR_R            (*((volatile U32*)0x40030048))
#define TIMER0_TBR_R            (*((volatile U32*)0x4003004C))
#define TIMER0_TAV_R            (*((volatile U32*)0x40030050))
#define TIMER0_TBV_R            (*((volatile U32*)0x40030054))
#define TIMER0_RTCPD_R          (*((volatile U32*)0x40030058))
#define TIMER0_TAPS_R           (*((volatile U32*)0x4003005C))
#define TIMER0_TBPS_R           (*((volatile U32*)0x40030060))
#define TIMER0_TAPV_R           (*((volatile U32*)0x40030064))
#define TIMER0_TBPV_R           (*((volatile U32*)0x40030068))
#define TIMER0_PP_R             (*((volatile U32*)0x40030FC0))


/*****************************************************************************/
//UART2

#define UART2_DR_R              (*((volatile U32 *)0x4000E000))
#define UART2_RSR_R             (*((volatile U32 *)0x4000E004))
#define UART2_ECR_R             (*((volatile U32 *)0x4000E004))
#define UART2_FR_R              (*((volatile U32 *)0x4000E018))
#define UART2_ILPR_R            (*((volatile U32 *)0x4000E020))
#define UART2_IBRD_R            (*((volatile U32 *)0x4000E024))
#define UART2_FBRD_R            (*((volatile U32 *)0x4000E028))
#define UART2_LCRH_R            (*((volatile U32 *)0x4000E02C))
#define UART2_CTL_R             (*((volatile U32 *)0x4000E030))
#define UART2_IFLS_R            (*((volatile U32 *)0x4000E034))
#define UART2_IM_R              (*((volatile U32 *)0x4000E038))
#define UART2_RIS_R             (*((volatile U32 *)0x4000E03C))
#define UART2_MIS_R             (*((volatile U32 *)0x4000E040))
#define UART2_ICR_R             (*((volatile U32 *)0x4000E044))
#define UART2_DMACTL_R          (*((volatile U32 *)0x4000E048))
#define UART2_9BITADDR_R        (*((volatile U32 *)0x4000E0A4))
#define UART2_9BITAMASK_R       (*((volatile U32 *)0x4000E0A8))
#define UART2_PP_R              (*((volatile U32 *)0x4000EFC0))
#define UART2_CC_R              (*((volatile U32 *)0x4000EFC8))

//*****************************************************************************

//FPU

#define CPACR                  (*((volatile U32 *)0xE000ED88))


//Macro Function to get register address after offset
#define GET_HWREG(BaseAddr,RegOffset)      (*((volatile U32*)(BaseAddr+RegOffset)))

#endif
