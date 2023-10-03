#include<stdio.h>
#include<string.h>


int main(){

// for loop = repeats a section of code a limited amount of times
// for(int i=1; i<=10;i+=2){
// printf("%d\n", i);
// }
// while loops can repeat a section of code possibly unlimited times
// While some condition remains true
// a while loop might not execute at all
// char name[25];

// printf("What's your name?: ");
// fgets(name,25 , stdin);
// name[strlen(name) -1] = '\0';
// while(strlen(name) == 0){
// printf("You did not enter a name\n");
// printf("What's your name?: ");
// fgets(name,25 , stdin);
// name[strlen(name) -1] = '\0';
// }
// printf("hello %s\n", name);

// do while loops execute atleast once
int number = 0;
int sum = 0;

do{
  printf("Enter a number above 0: \n");
  scanf("%d", &number);
  if(number>0){
    sum +=number;
  }
}while(number > 0);
printf("%d", sum);
return 0;
}