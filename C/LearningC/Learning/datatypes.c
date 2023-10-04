#include<stdio.h>
#include<stdbool.h>
int main(){
  char a='C'; // single char %c
  char b[] ="Bro"; // array of chars $s

  float c = 3.141592; // 4 bytes ( 32bits of precision) 6-7 digits %f
  double d= 3.141592456464765; // 8 bytes (64bits of precision)15-16 digits %lf

  bool e = true; //1 byte true or false %d
  char f =100; // 1 byte (-128 to 127) %d or %c
  unsigned char g =255; // discards any negative numbers (0 to 255) %d or %c
  // printf("%f\n", c);
  // printf("%lf", d);
  //printf("%d", e);
  //printf("%c", f);

  //format specifier % = defines and formats a type of data to be displayed
  // %c = chars
  // $s = array of chars (strings)
  // %f = float
  // %lf = double
  // %d = integer
  // %.1 = decimal precision
  // %1 = minimum field width
  // %-=left align
  float item1= 5.17;
  float item2= 10.00;
  float item3= 100.99;
  printf("Item1: $%.2f\n", item1);
  printf("Item2: $%.2f\n", item2);
  printf("Item3: $%.2f", item3);
}