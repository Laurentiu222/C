#include<stdio.h>
#include<time.h>
#include<stdlib.h>



int main(){
  const int MIN = 1;
  const int MAX = 10;
  int guess;
  int guesses = 5;
  int answer;
  
  srand(time(0)); // current time as a seed to genrate a random number as a guess

  // generate a random number between MIN and MAX
answer= (rand() % MAX + MIN);
  while(guesses > 0){
    printf("***********************\n");
    printf("Enter a number: \n");
    scanf("%d", &guess);
    printf("***********************\n");
  if(answer == guess){
    printf("You guessed corectly!!!\n");
    break;
  }else{
    printf("Try again!\n");
  }
  guesses--;
  printf("Guesses left: %d\n", guesses);
  }
  return 0;
}