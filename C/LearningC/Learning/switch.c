#include<stdio.h>

int main(){
char grade;
printf("Enter a letter grade: \n");
scanf("%c", &grade);
switch (grade)
{
case 'A':
  printf("You are a top student");
  break;
case 'B':
printf("You  did good");
break;
case 'C':
printf("You did ok");
break;
case 'D':
printf("At least it s not an F");
break;
case 'F':
printf("Try harder next time");
break;
default:
printf("Enter a valid letter form A to F next time");
  break;
}
}