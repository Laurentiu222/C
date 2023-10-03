#include<stdio.h>
#include<stdbool.h>


int main(){
  // logical operators &&(and) || (or) and !(not)
   float temp = 25;
   bool sunny = false;
   if(temp >= 15 && temp <=30 && sunny){
    printf("The wether is good\n");
   }else{
    printf("The temp is bad");
   }
  return 0;
}