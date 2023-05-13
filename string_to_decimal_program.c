#include "STD_Types.h"
#include "string_to_decimal_interface.h"


F64 string_to_decimal(char* st){
    S16 sz=0;
	  S16 i,j,dot;
	  F64 ans=0;
       for(i=0;;i++){
        if(st[i]==0){break;}
        sz++;
        }
 
        
        dot=sz+1;
        for(i=0;i<sz;i++){
            if(st[i]=='.'){dot=i;break;}
        }
 
        for(i=0;i<sz;i++){
          if(i!=dot){
               S16 p=dot-i;
           F64 temp=(F64)st[i]-48;
 
           if(p>0){
               p--;
               for(j=0;j<p;j++){
                   temp*=10;
               }
           }else{
                for(j=0;j<-p;j++){
                   temp/=10;
               }
           }
 
 
           ans+=temp;
          }
 
        }
 
        if(dot==sz+1){ans/=10;}
        return ans;
 
    }	