#include <stdio.h>
//typedef char user[25];
typedef struct{
char name[25];
char password[25];
int id;
} User;
int main(){
  //typedef= reserved keyword that gives an exsiting datatype a "nickname"

  // user user1 = "Bro";
   User user1 = {"Bro", "password123", 123456789};
   User user2 = {"Code", "password124", 123456};
   printf("%s\n",user1.name);
   printf("%s\n", user2.name);
   printf("%s\n",user1.password);
   printf("%s %s",user1.name, user1.password);
}