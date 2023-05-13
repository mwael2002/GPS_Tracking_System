#include <math.h>
#include "STD_Types.h"
#include "distance_calc_interface.h"

F64 min_to_dec(F64 x){
  U16 y = x/100;
  F64 z = x - y*100;
  return  (z/60)+y;
}		
		
F64 distance_calculation(F64 x1,F64  y1,F64  x2,F64  y2){
   return sqrt((pow(x1-x2,2) + pow(y1-y2,2)));
}

