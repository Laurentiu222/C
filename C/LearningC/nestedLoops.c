#include <stdio.h>

int main(){
  // nested loops = a loop inside of another loop
  int rows;
  int columms;
  char symbol;
  printf("Enter # of rows: ");
  scanf("%d", &rows);

  printf("Enter # of columms: ");
  scanf("%d", &columms);

  scanf("%c");
    printf("Enter a symbol: ");
  scanf("%c", &symbol);

  for(int i =1;i <= rows;i++){
    for(int j = 1; j<= columms;j++){
      printf("%c", symbol);
    }
    printf("\n");
  }
}