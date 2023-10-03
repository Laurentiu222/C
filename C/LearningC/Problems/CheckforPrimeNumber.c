#include<stdio.h>
#include<math.h>

  int prime(int a){
    if(a == 1){
      return 0;
    }
    if(a == 2){
      return 1;
    }

    int upperLimit = sqrt(a);
    for(int i=2;i<=upperLimit; i++){
      if(upperLimit % i == 0){
        return 0;
      }
    }
  return 1;
  }

int main(){

  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  int result = prime(num);
  if(result){
    printf("Is prime");
  }else{
    printf("Is not prime");
  }
}