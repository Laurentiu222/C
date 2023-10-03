#include<stdio.h>
#include<math.h>

int main(){
  int a;
  int b;
  double c;
  printf("Enter the first value of the triangle: \n");
  scanf("%d", &a);
  printf("Enter the second value of the triangle: \n");
  scanf("%d", &b);
  c=sqrt(pow(a,2) + pow(b,2));
  printf("The hypotenuse is: %lf",c);

  return 0;
}