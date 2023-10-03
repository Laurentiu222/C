#include<stdio.h>
#include<math.h>
int main(){
  double num1;
  double num2;
  char op;
  double result;
  printf("Enter an operator: \n");
  scanf("%c", &op);
    printf("Enter an number: \n");
  scanf("%lf", &num1);
    printf("Enter an second number: \n");
  scanf("%lf", &num2);
  switch (op)
  {
  case '+':
    result = num1 + num2;
    printf("Reuslt is: %.1lf", result);
    break;
  case '-':
    result = num1 - num2;
    printf("Reuslt is: %.1lf", result);
    break;
  case '*':
      result = num1 * num2;
      printf("Reuslt is: %.1lf", result);
    break;
  case '/':
      result = num1 / num2;
      printf("Reuslt is: %.1lf", result);
    break;
  default:
  printf("Enter a valid operand");
    break;
  }
}