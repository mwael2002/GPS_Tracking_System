#include "STD_Types.h"
#include "Mcu_Hw.h" // Include header for your specific microcontroller


//volatile U32 g_tick_count = 0; // Global variable to hold tick count



void sys_init(U32 msec)
{
    NVIC_ST_CTRL_R = 0;
    NVIC_ST_RELOAD_R = msec*16000-1;
    NVIC_ST_CURRENT_R = 0;
    NVIC_ST_CTRL_R = 5;
}



U8 sys_finish_count(void){

if((NVIC_ST_CTRL_R&0x10000)==0){
	   return 0;
   }

    return 1;

/*while((NVIC_ST_CTRL_R&0x10000)==0);
	return 1;
*/
}




/*void count_Handler(void)
{
    g_tick_count++; // Decrease tick count
}
U32 systick_get_tick_count(void)
{
    return g_tick_count;
}



int main(void)
{
    sys_init(1000); // Initialize SysTick to fire every 1s
    volatile U32 ticks = 20
    // systick_set_tick_count(ticks);

    while (1)
    {
        if (NVIC_ST_CTRL_R&0x10000 )
        {
            SysTick_Handler()
            if (systick_get_tick_count() == ticks)
            {
                //do something
            }
        }
    }
}*/