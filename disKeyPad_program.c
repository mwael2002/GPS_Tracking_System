#include "STD_Types.h"
#include "Keypad_interface.h"
#include "LCD_interface.h"


U16 disKeyPad() {
	  U16 dis = 0;
	  KPD_init();
    
	   LCD_write_string_pos("A>submit *>clear",0,0);
	   while (1) {
        // Read the keypad
        U8 key = KPD_status();
			 
        if (key == 10) { // done
					  LCD_clear();
            break;
        }
				else if (key == 14) { // clear
            LCD_clear();
            dis = 0;
					  LCD_write_string_pos("A>submit *>clear",0,0);
					
        } 
				else if(key!=No_pressed_key){
            dis = dis * 10 + key;
            LCD_write_no_pos(dis,1,0);       
        }
    }

   return dis;
    
}