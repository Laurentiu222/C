#include<stdio.h>
#include<string.h>

void sort(int array[], int size){
for( int i=0; i<size-1; i++){
  for(int j=0;j<size -1; j++){
    if(array[j] > array[j+1]){
      int temp = array[j];
      array[j] = array[j+1];
      array[j+1] = temp;
    }
  }
}
}
void PrintArray(int array[], int size){
  for(int i= 0 ; i<size;i++){
    printf("%d\n", array[i]);
  }
}
// void sort(char array[], int size){
// for( int i=0; i<size-1; i++){
//   for(int j=0;j<size -1; j++){
//     if(array[j] > array[j+1]){
//       int temp = array[j];
//       array[j] = array[j+1];
//       array[j+1] = temp;
//     }
//   }
// }
// }
// void PrintArray(char array[], int size){
//   for(int i= 0 ; i<size;i++){
//     printf("%c\n", array[i]);
//   }
// }
int main(){
  int array[] = {1,9,4,3,5,6,7,8,2};
  //char array[] = {'B','A','D','S','R','T','G','V','C'};
  int size = sizeof(array)/sizeof(array[0]);
  sort(array, size);
  PrintArray(array, size);

return 0;
}