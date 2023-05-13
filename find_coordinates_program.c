#include "STD_Types.h"
#include "find_coordinates_interface.h"


void find_coordinates(char* str,char* longi,char* lat){
	
	        U8 lat_counter,long_counter;

  
        
            for (lat_counter =0;lat_counter<10;lat_counter++)
            {
                lat[lat_counter]=str[lat_counter+1];
                
            }
						
						lat[10]='\0';
						
						
		        for (long_counter =0;long_counter<10;long_counter++)
            {
                longi[long_counter]=str[long_counter+14];
                
            }
						
            longi[11]='\0';

        }

