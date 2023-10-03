#include<stdio.h>
#include<string.h>



int main(){
char string1[]="Bro";
char string2[]="Code";

// strlwr(string1); // converts to lower
// strupr(string2); // converts to Upper
// strcat(string1, string2);//appends str1 to str2, also just a number of chars from str2
// strncat(string1, string2, 1); //appends n chars from string2 to string 1
// strcpy(string1, string2); // copy string2 to string 1
// strncpy(string1, string2,3); // copy n chars from string2 to string 1
// strrev(string1); // reverse a string
//int result = strlen(string1); // returns string length as int
int result = strcmp(string1, string2); // string compare all chars
if(result == 0){
  printf("Strings are the same\n");
}else{
  printf("Not the same\n");
}
printf("%d\n", result);
printf("%s", string2);
return 0;
}