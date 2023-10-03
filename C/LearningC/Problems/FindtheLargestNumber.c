#include<stdio.h>


int largest(int a, int b, int c){
  int largest = a;
  if(largest <b ){
    largest =b;
  }
  if(largest <c ){
    largest =c;
  }
  return largest;
}

int main(){
  int num1;
  int num2;
  int num3;

  printf("Enter the 1st number: \n");
  scanf("%d", &num1);
  printf("Enter the 2nd number: \n");
  scanf("%d", &num2);
  printf("Enter the 3rdnumber: \n");
  scanf("%d", &num3);

int reuslt = largest(num1,num2,num3);
printf("Result: %d", reuslt);
}