#include <stdio.h>

float calulator(float a, float b, char chooise)
{
  float result;
  switch (chooise)
  {
  case '+':
     result = a + b;
   return  printf("The result is:%f", result);
    break;
  case '-':
     result = a - b;
   return printf("The result is:%f", result);
    break;
  case '*':
     result = a * b;
     return printf("The result is:%f", result);
    break;
  case '/':
     result = a / b;
   return printf("The result is:%f", result);
    break;
  default:
    return printf("The result is: incorect");
    break;
  }
}

int main()
{

  float num1;
  float num2;
  char chooise;

  printf("Enter number: ");
  scanf("%f", &num1);

  printf("Enter number: ");
  scanf("%f", &num2);
  printf("Choose action from '+, -, *, /' : ");
  scanf(" %c", &chooise);

  calulator(num1, num2, chooise);
}