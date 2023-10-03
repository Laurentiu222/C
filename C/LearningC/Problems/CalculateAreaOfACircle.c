#include<stdio.h>
#include<math.h>

float area(float a){
  float result;
  float pi = 3.14;
  result = pow(a,2) * pi;
  return result;
}


int main(){

  float radius;

  printf("Enter the radius: ");
  scanf("%f", &radius);

  float result= area(radius);
  printf("The area is:%f",result);
  return 0;
}