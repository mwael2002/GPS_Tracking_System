#include "STD_Types.h"
#include "find_coordinates_interface.h"
#include "distance_calc_interface.h"
#include "string_to_decimal_interface.h"
#include "distance_accumulator_interface.h"
#include "LCD_interface.h"

F64 acc_dist(char* data)
    {
        static F64 oldx =0 ,oldy=0,acc=0;
		    F64 inst_distance=0,lo,la;
		
        
        char longi[12],lati[11];
        
        find_coordinates(data,longi,lati);
        lo=min_to_dec(string_to_decimal(longi));
        la=min_to_dec(string_to_decimal(lati));
        
        
        
       // LCD_write_float_no_pos(la,0,0);
       // LCD_write_float_no_pos(lo,1,0);
        
        
        inst_distance=distance_calculation(la,lo,oldx,oldy)*100000;
        
        if (inst_distance<40)
        {
          acc+=inst_distance;  
        }
        
        
        oldx = la;
        oldy =lo;
        
        return acc;
    }