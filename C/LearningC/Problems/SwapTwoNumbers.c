#include <stdio.h>

int swap(int a, int b)
{
  a = a + b;
  b = a - b;
  a = a - b;
  printf("Result is %d", a);
  printf("Result is %d", b);
}

int main()
{

  int a = 2;
  int b = 3;

  swap(a , b);
  
}