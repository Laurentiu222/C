#include <stdio.h>

int main(){
 // BITWISE operators = special operators used in bit level programing(knowing binary is important for this topic)

 // & AND
 // | OR
 // ^ COR
 // << left  shift
 // >> right shift

  int x = 6; //6 =  00000110
  int y =12; //12 = 00001100
  int z =0;  //0 =  00000000

  z = x & y;
  printf("AND = %d\n", z);
  z = x | y;
  printf("OR = %d\n", z);
  z = x ^ y;
  printf("XOR = %d\n", z);
  z = x << 1;
  printf("Left Shift = %d\n", z);
  z = x >> 1;
  printf("Right Shift = %d\n", z);
}