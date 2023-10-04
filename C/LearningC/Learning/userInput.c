#include<stdio.h>
#include <string.h>
int main(){
  // int age;
  // printf("How old are you?\n");
  // scanf("%d", &age);

  // printf("You are %d years old", age);
  char c[25];
  printf("Why you like pizza?\n");
  //scanf("%s" ,&c);
  fgets(c,25,stdin);
  c[strlen(c)-1] = '\0';

  printf("I like pizza because: %s", c);




  return 0;
}