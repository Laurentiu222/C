#include<stdio.h>


int main(){
  int age;
  printf("Enter your age: \n");
  scanf("%d", &age);
  if(age >= 18){
    printf("You are now signed up!");
  }else if(age <0){
    printf("You have;t been born yet");
  }else if(age == 0){
    printf("You can t signed up");
  }
  else{
    printf("You are not 18 or older");
  }
}