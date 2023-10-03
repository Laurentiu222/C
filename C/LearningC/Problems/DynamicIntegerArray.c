#include<stdio.h>
#include<stdlib.h>

//Write a program that dynamically allocates an array of integers of a user-defined size. Prompt the user for the size of the array, allocate memory for it, and then ask the user to input values for each element. Finally, print out the array elements and release the allocated memory.

int main(){

  int size;

  printf("Enter size of the array: ");
  scanf("%d", &size);

  int* ptr = (int *) malloc(size* sizeof(int));
  if(ptr == NULL){
    printf("Memory alloc failed\n");
    return 1;
  }
  for(int i=0;i<size;i++){
    printf("Enter number:");
    scanf("%d", ptr+i);
  }
  for(int i=0;i<size;i++){
    printf("Array elements:%d\n", *(ptr+i));
  }
  free(ptr);
}