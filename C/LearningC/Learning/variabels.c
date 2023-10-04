#include <stdio.h>

int main(){
  int x;//declaration
  x = 123; // initialization
  int y = 321;//declaration + initialization
  int age= 21; // integer
  float gpa = 2.05; // floating point number
  char grade = 'C'; //single character
  char name[] = "Bro"; // array of chars

  printf("You are %d years old\n", age);
  printf("Hello %s\n", name);
  printf("Your average grade is %c\n", grade);
  printf("Your gpa is: %f", gpa);
  return 0;
}