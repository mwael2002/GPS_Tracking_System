#include "STD_Types.h"
#include "bit_calc.h"
#include "Mcu_Hw.h"
#include "Port_Interface.h"

extern Port_ConfigType PortConfigArr[43];
void Port_init(void){
    
	  U8 Port_Id;
    U8 Pin_Id;
    U8 Pin_count;
	  volatile GPIO_Register* Port_Address;
    
	 
	
	for (Pin_count = 0; Pin_count<43; Pin_count++ ){
    	 if(Pin_count>=38){ 
		      Port_Id = Port_Id_F;
     		 if(Pin_count<=39){ 	 
				 Pin_Id = (Pin_count%8)-6;
		     }
				 else{
				 Pin_Id=(Pin_count%8)+2;
				 }
	    }				 
		
		
		else{
		    Port_Id = Pin_count/ 8;
     		Pin_Id = Pin_count % 8;
		}
		
		
        switch (Port_Id){
        case Port_Id_A:
            Port_Address = PORTA;
			set_bit(SYSCTL_RCGCGPIO_R,0);
		    while(get_bit(SYSCTL_PRGPIO_R,0)==0);
            break;
        case Port_Id_B:
            Port_Address = PORTB;
			set_bit(SYSCTL_RCGCGPIO_R,1);
		    while(get_bit(SYSCTL_PRGPIO_R,1)==0);
            break;
		case Port_Id_C:
            Port_Address = PORTC;
            set_bit(SYSCTL_RCGCGPIO_R,2);
		    while(get_bit(SYSCTL_PRGPIO_R,2)==0);
			break;
				 case Port_Id_D:
            Port_Address = PORTD;
            set_bit(SYSCTL_RCGCGPIO_R,3);
		    while(get_bit(SYSCTL_PRGPIO_R,3)==0);
			break;
		case Port_Id_E:
            Port_Address = PORTE;
            set_bit(SYSCTL_RCGCGPIO_R,4);
		    while(get_bit(SYSCTL_PRGPIO_R,4)==0);
			break;
        case Port_Id_F:
            Port_Address = PORTF;
            set_bit(SYSCTL_RCGCGPIO_R,5);
		    while(get_bit(SYSCTL_PRGPIO_R,5)==0);
			break;									 
        }
				
				if((PortConfigArr[Pin_count].LockStatus == Pin_Unlocked)&&(get_bit(SYSCTL_RCGCGPIO_R,Port_Id)==1)){ 
				
				Port_Address->GPIO_LOCK_R=0x4C4F434B;
				set_bit(Port_Address->GPIO_CR_R,Pin_Id);
				
				
				
          /* set channel direction */
        if(PortConfigArr[Pin_count].Dir == Pin_Dir_Output){
            set_bit(Port_Address->GPIO_DIR_R,Pin_Id);
        }
        else if(PortConfigArr[Pin_count].Dir == Pin_Dir_Input){
            clear_bit(Port_Address->GPIO_DIR_R , Pin_Id);
        }

				set_bit(Port_Address->GPIO_DEN_R ,Pin_Id);
				
        /* enable Dio */
        if(PortConfigArr[Pin_count].Mode == Pin_Mode_Dio){
            clear_bit(Port_Address->GPIO_AFSEL_R ,Pin_Id);
					  clear_bit(Port_Address->GPIO_ADCCTL_R,Pin_Id);
					  
        }
				
				
				/**enable another mode**/
        else{
            set_bit(Port_Address->GPIO_AFSEL_R , Pin_Id);
            Port_Address->GPIO_PCTL_R |= (PortConfigArr[Pin_count].Mode << (Pin_Id*4) );
        }
				
				
				/**enable ADC**/
        if(PortConfigArr[Pin_count].Mode == Pin_Mode_AIN ){
            /* disable digital */
            clear_bit(Port_Address->GPIO_DEN_R,Pin_Id);
            /* enable ADC */
            set_bit(Port_Address->GPIO_ADCCTL_R,Pin_Id);
        }
        
				
				
				
				/* set Interrupt configuration */
        if(PortConfigArr[Pin_count].Interrupt == Pin_IntDisable){
            clear_bit(Port_Address->GPIO_IM_R,Pin_Id);
        }
				
				
        else{
					clear_bit(Port_Address->GPIO_IM_R,Pin_Id);
					
					
					if(PortConfigArr[Pin_count].Interrupt == Pin_IntFallingEdge){
						    clear_bit(Port_Address->GPIO_IS_R,Pin_Id);	  
                clear_bit(Port_Address->GPIO_IEV_R,Pin_Id);
            }
            else if(PortConfigArr[Pin_count].Interrupt == Pin_IntRisingEdge){
                 clear_bit(Port_Address->GPIO_IS_R,Pin_Id);	
							   set_bit(Port_Address->GPIO_IEV_R,Pin_Id);
            }
								
            else if(PortConfigArr[Pin_count].Interrupt == Pin_IntBothEdges){
                  clear_bit(Port_Address->GPIO_IS_R,Pin_Id);	
							    set_bit(Port_Address->GPIO_IBE_R,Pin_Id);
            }
						
						else if(PortConfigArr[Pin_count].Interrupt==Pin_IntLowLevel){
						  set_bit(Port_Address->GPIO_IS_R,Pin_Id);
							clear_bit(Port_Address->GPIO_IEV_R,Pin_Id);
						}
						else if(PortConfigArr[Pin_count].Interrupt==Pin_IntHighLevel){
							set_bit(Port_Address->GPIO_IS_R,Pin_Id);
							set_bit(Port_Address->GPIO_IEV_R,Pin_Id);
						}
						
						set_bit(Port_Address->GPIO_IM_R,Pin_Id);
        }

				
				/* set Internal Attachment configuration */
        if(PortConfigArr[Pin_count].Attach == Pin_InternalAttach_PullUp){
            set_bit(Port_Address->GPIO_PUR_R,Pin_Id);
        }
				else if(PortConfigArr[Pin_count].Attach  == Pin_InternalAttach_PullDown){
            set_bit(Port_Address->GPIO_PDR_R,Pin_Id);
        }
				else if(PortConfigArr[Pin_count].Attach == Pin_InternalAttach_OpenDrain){
            set_bit(Port_Address->GPIO_ODR_R,Pin_Id);
        }

        /*set current strength configuration */
        if(PortConfigArr[Pin_count].CurrentDrive  == Pin_CurrDrive_2mA){
            set_bit(Port_Address->GPIO_DR2R_R,Pin_Id);
        }
				else if(PortConfigArr[Pin_count].CurrentDrive == Pin_CurrDrive_4mA){
            set_bit(Port_Address->GPIO_DR4R_R,Pin_Id);
        }
				else if(PortConfigArr[Pin_count].CurrentDrive == Pin_CurrDrive_8mA){
            set_bit(Port_Address->GPIO_DR8R_R,Pin_Id);
        }
			}
				
			
			else if(PortConfigArr[Pin_count].LockStatus == Pin_Locked){
				Port_Address->GPIO_LOCK_R=0x01;
				clear_bit(SYSCTL_RCGCGPIO_R,Port_Id);
			}
	
			
	  }
	
}