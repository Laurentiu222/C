#include <stdio.h>
struct Student{
  char name[25];
  float gpa;
};
int main(){
  struct Student student1 = {"Spongebob", 3.0};
  struct Student student2 = {"Patrick", 2.5};
  struct Student student3 = {"SquidWord", 4.0};
  struct Student student4 = {"Bro", 3.7};
  struct Student students[] = {student1,student2,student3,student4};
  int size = sizeof(students)/ sizeof(students[0]);
  for(int i =0; i<size;i++){
    printf("%s ", students[i].name);
    printf("%.1f\n", students[i].gpa);
  }
  return 0;
}