#include<stdio.h>
#include<stdlib.h>



int main(){

  int size;

  printf("Enter size of the array:");
  scanf("%d", &size);

  int* source = (int *) malloc(size * sizeof(int));
  int* destination = (int *) malloc(size * sizeof(int));

 if (source == NULL || destination == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

  for(int i=0;i<size;i++){
    printf("Enter element:");
    scanf("%d", source+i);
  }
  
  for(int i=0; i<size;i++){
    *(destination + i) = *(source + i);
  }

  for(int i=0; i<size;i++){
    int swap = 0;
    for(int j=0; j<size -i -1; j++){
      if(destination[j] > destination[j+1]){
        int temp = destination[j];
        destination[j] = destination[j+1];
        destination[j+1] = temp;
        swap =1;
      }
    }

  }

      printf("Copied array elements and sorted: \n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", destination[i]);
    }

  free(source);
  free(destination);

  return 0;
}