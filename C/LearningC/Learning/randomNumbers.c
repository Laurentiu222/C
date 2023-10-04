#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
  // pseudo random numbers - A set of values or elements that are statisticaly random
  //                          Don t use these for any sort of ctyptographic security
  // seed is important so that we don t generate the same number everytime
  srand(time(0)); // s = seed rand = random
  int number1 = (rand() % 6 + 1);
  int number2 = (rand() % 6 + 1);
  int number3 = (rand() % 6 + 1);
  
  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);

  return 0;
}