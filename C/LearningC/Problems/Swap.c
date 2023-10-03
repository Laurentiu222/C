#include<stdio.h>

//: Swap Two Integers Using Pointers
//Write a program that swaps the values of two integers using pointers.

int main(){

  int a=2;
  int b=3;

  int* ptr1= &a;
  int* ptr2= &b;
  
  int temp = *ptr2;
  *ptr2 = *ptr1;
  *ptr1 = temp;

  printf("Swap is a= %d and b= %d", *ptr1, *ptr2);
  return 0;
}