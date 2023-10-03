#include <stdio.h>

int main(){
  //memory = an array of bytes within RAM (strret)
  //memory block = a single unit ( byte) within memory, used to hold some value ( person)
  //memory adress = the address of where a moemory block is located ( house adress)

    char a= 'X';
    char b= 'Y';
    char c= 'Z';
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
 return 0;
}