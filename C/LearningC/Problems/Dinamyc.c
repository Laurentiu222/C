#include<stdio.h>
#include <stdlib.h>

int main(){

  // int n = 4;
  // int* ptr;

  // ptr = (int*) malloc(n* sizeof(int));
  // if(ptr == NULL){
  //   printf("Memory can not be allocated");
  //   return 0;
  // }
  // printf("Enter input values: \n");
  // for(int i=0; i<n; i++){
  //   scanf("%d", ptr + i);
  // }
  // printf("Input values: \n");
  // for(int i= 0 ; i<n;i++){
  //   printf("%p\n", ptr+i);
  // }

  // n=6;
  // ptr = realloc(ptr, n* sizeof(int));

  // printf("New memory allocation\n");
  // for(int i=0;i<n;i++){
  //   printf("%p\n", ptr+i);
  // }

  // free(ptr);

  int n=4;

  int* ptr = (int*) malloc(n* sizeof(int));

  printf("Enter age:\n");
  for(int i=0;i<n;i++){
    scanf("%d", ptr+i);
  }
  for(int i=0;i<n;i++){
    printf("Age is:%d\n", *(ptr+i));
  }
  n=6;
  ptr = realloc(ptr, n* sizeof(int));
  printf("Enter 2 more ages:\n");
  for(int i=4;i<n;i++){
    scanf("%d", ptr+i);
  }
 for(int i=0;i<n;i++){
    printf("Age is:%d\n", *(ptr+i));
  }
  free(ptr);

  return 0;
}