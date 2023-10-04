#include<stdio.h>


int main(){
  // FILE *pF = fopen("C:\\Users\\laurm\\OneDrive\\Desktop\\test.txt","w");

  // fprintf(pF, "\nSpongeBob SquarePants");

  // fclose(pF);
  FILE *pF =fopen("C:\\Users\\laurm\\OneDrive\\Desktop\\poem.txt", "r");

  char buffer[255];
  if(pF == NULL){
    printf("Unable to open file");
  }else{
  while(fgets(buffer, 255, pF) != NULL){
  printf("%s", buffer);
  }
  }


  fclose(pF);





  // if(remove("test.txt") == 0){
  //   printf("That file was deleted succsufully");
  // }else{
  //   printf("That files was not delted");
  // }
return 0;
}