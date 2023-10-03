#include<stdio.h>
// void birthday(char name[], int age){
//   printf("Happy birthday dear %s!\n", name);
//   printf("You  are %d years old!\n", age);
// }
// double square(double x){
// double result = x * x;
// return result;
// }
int findMax(int x,int y){

  return(x >y) ? x : y;
}
int main(){
//   char name[] = "Bro";
//   int age = 21;
// birthday(name,age);
// double x = square(3.14);
// printf("%lf", x);
int max = findMax(3,4);
printf("%d", max);
return 0;
}