#include <stdio.h>

int main(){
  //2D array = an array, where each element is an entire array usseful if you need a matrix,grid or table
  //int number[2][3] = {{1,2,3}, {4,5,6}}; // 2 = number of rows while 3= number of colums
  int numbers[3][3];
  numbers[0][0] = 1;
  numbers[0][1] = 2;
  numbers[0][2] = 3;
  numbers[1][0] = 4;
  numbers[1][1] = 5;
  numbers[1][2] = 6;
  numbers[2][0] = 7;
  numbers[2][1] = 8;
  numbers[2][2] = 9;

int rows = sizeof(numbers)/sizeof(numbers[0]);
int colums = sizeof(numbers[0])/sizeof(numbers[0][0]);
  for(int i =0;i< rows;i++){
    for(int j=0;j<colums;j++){
      printf("%d", numbers[i][j]);
    }
    printf("\n");
  }
return 0;
}