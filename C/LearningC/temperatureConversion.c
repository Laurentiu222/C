#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(){
  char unit;
  float temp;
  printf("Is the temperature if (F) or (C)?: \n");
  scanf("%c", &unit);
  unit= toupper(unit);
  if(unit == 'C'){
    printf("Enter the temerature in Celcius: \n");
    scanf("%f", &temp);
    temp = temp * 9/5+32;
    printf("Temperature in Fahrenheit will be:%f \n", temp);
  }else if(unit == 'F'){
        printf("Enter the temerature in Feranhait: \n");
    scanf("%f", &temp);
    temp = (temp -32) * 5/9;
     printf("Temperature in Celsius will be:%f \n", temp);
  }else{
    printf("Enter a valid temperature mesuarment.\n");
  }
}