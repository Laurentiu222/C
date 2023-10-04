#include<stdio.h>


int main(){
 // array = a data structure that can store many values of the same data type

  double prices[] = {5.0,10.0,15.0,25.0,20.0};
//  double prices[5];
//  prices[0] = 5.0;
//  prices[1] = 10.0;
//  prices[2] = 15.0;
//  prices[3] = 25.0;
//  prices[4] = 20.0;
//printf("%d bytes", sizeof(prices));
for(int i=0; i<sizeof(prices)/sizeof(prices[0]);i++){
  printf("$%.2lf\n", prices[i]);
}
 printf("$%.2lf", prices[3]);
return 0;
}