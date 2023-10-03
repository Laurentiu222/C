//Write a program that asks the user to enter a number and checks whether it is even or odd. Print "Even" or "Odd" accordingly.
// #include<stdio.h>

// int main(){
//   int a;
//   printf("Please enter a number: ");
//   scanf("%d", &a);
//   if(a %2 == 0){
//     printf("The number %d is even!!\n", a);
//   }else{
//     printf("The number %d is even!\n",a);
//   }
//   return 0;
// }

//Write a program that calculates the factorial of a number entered by the user. The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.
// #include<stdio.h>
// #include<math.h>

// int main(){
//   int a;
//   int factorial=1;
//   printf("Enter a number to find it's factorial: ");
//   scanf("%d", &a);
//   if(a < 0){
//     printf("It needs to be a pozitiv number!!!\n");
//   }else if(a == 0){
//     printf("The factorial of 0 is 1!!!!\n");
//   }else if(a>0){
//     for(int i=1; i<=a; i++){
//       factorial *= i;}
//     printf("The factorial of tour number is %d\n",factorial);
//   }else{
//     printf("Eneter a number not a char");
//   }
//   return 0;
// }

//Write a program that asks the user to enter a positive integer and prints all the prime numbers less than or equal to that number.
// #include<stdio.h>
// #include<math.h>

// int main(){
//   int a;
//   int prime;
//   printf("Enter a number to see if it s prime or not: ");
//   scanf("%d", &a);

//   for(int i=2; i<=a;i++){
//     prime  =1;
//     for(int j=2; j*j<=i;j++){
//     if(i % j ==0){
//       prime =0;
//       break;
//     }
//     }if(prime){
//       printf("%d\n", i);
//     }
//   }

  // if( a == 2){
  //   printf("The number is a prime number!!!");
  // }else if( a %2 == 0){
  //   printf("The number is not a prime number!!!");
  // }else if(a>0 && a %1 ==0 && a %a ==0){
  //   printf("The number is a prime number!!!");
  // }
//   return 0;
// }


// Write a program that asks the user to enter a number and checks whether it is a palindrome. A palindrome is a number that remains the same when its digits are reversed.
// #include<stdio.h>
// #include<math.h>
//  int isPolindrom(int num){
//   int reverse =0;
//   int temp = num;
//   while(temp > 0){
//     int lastDigit = temp % 10;
//     reverse = reverse * 10 + lastDigit;
//     temp = temp /10;
//   }
//   if(num == reverse){
//     printf("It is");
//   }else{
//     printf("It is not");
//   }
//  }

// int main(){
//   int number;

//   printf("Enter number to evaluate if it's a polindrom: ");
//   scanf("%d", &number);
//   isPolindrom(number);
//   return 0;
// }

//Write a program that generates and prints the Fibonacci sequence up to a given number entered by the user. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones.
// #include<stdio.h>

//   void fibonacci(int num){
//     int current = 1;
//     int privious=0;
//     int fibo;
//     printf("%d\n", privious);
//     while(current <= num){
//       fibo = current + privious;
//       printf("%d\n", current);
//       privious = current;
//       current = fibo;
//     }
// }

// int main(){
//   int number;

//   printf("Enter for ho long you want the Fibonacci sequance to go on: ");
//   scanf("%d", &number);

//   fibonacci(number);
//   return 0;
// }

//Write a program that asks the user to enter a number and checks whether it is a perfect number. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself).
// #include<stdio.h>

// void isPerfect(int num){
//   int perfectNum=0;
//   for(int i=1;i<num; i++){
//     if(num % i ==0){
//       perfectNum += i;
//       }
//   }
//       if(perfectNum == num){
//         printf("Perfect Number\n");
//       }else{
//         printf("Not a perfect number\n");
//       }
  
// }

// int main(){
//   int number;
//   printf("Enter number: ");
//   scanf("%d", &number);

//   isPerfect(number);
//   return 0;
// }


//Write a program that asks the user to enter a string and counts the number of vowels (a, e, i, o, u) in it. Ignore case sensitivity.

// #include<stdio.h>
// #include<string.h>
// #include <ctype.h>

// void vowels(const char str[]){
//   int vowels =0;
//   for(int i=0;i<strlen(str);i++){
//     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
//       vowels++;
//     }
//   }
//   printf("%d", vowels);
// }

// int main(){
//   char string[25];
//   printf("Enter a string: ");
//   scanf("%s", string);

//   printf("You entered: %s\n", string);
//   vowels(string);
//   return 0;
// }

//Write a program that asks the user to enter a string and checks whether it is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.

// #include<stdio.h>
// #include<string.h>
// #include <ctype.h>

// void isPoli(const char str[]){
//   char tempStr[25];
//   for(int i=strlen(str)-1, j=0;i>=0;i--, j++){
//     tempStr[j] = str[i];
//   }
//     int comp = strcmp(tempStr, str);
//     if(comp == 0){
//       printf("Is polindrom!!");
//     }else{
//       printf("Is not polindrom!");
//     }
// }

// int main(){
//   char string[25];
//   printf("Enter a string: ");
//   scanf("%s", string);
//   isPoli(string);

//   return 0;
// }

//Write a program to calculate the sum of all even numbers between 1 and a given positive integer

// #include<stdio.h>
// #include<string.h>
// #include <ctype.h>

// void sumOfEvenNum(int num){
//   int evenSum = 0;
//   for(int i=1;i<=num;i++){
//     if(i % 2 == 0){
//       evenSum +=i;
//     }
//   }
//   printf("%d", evenSum);
// }

// int main(){

//   int number;
//   printf("Enter the value of the number: ");
//   scanf("%d", &number);

//   sumOfEvenNum(number);
//   return 0;
// }

//Write a program to find the largest and smallest elements in an array of integers.
// #include<stdio.h>
// #include<string.h>
// #include <ctype.h>

//   void smallAndLarge(int num[],int length){
//     int small= num[0];
//     int large =num[0];
//     for(int i=1;i<length;i++){
//       if(small > num[i]){
//         small = num[i];
//       }
//        if(large < num[i]){
//         large = num[i];
//       }
//     }
//        printf("Smallest element: %d\n", small);
//     printf("Largest element: %d\n", large);
//   }

// int main(){
//   int a[] ={1,23,4,56,4,3,5,774,32,1};
//   int length = sizeof(a)/sizeof(a[0]);
//   smallAndLarge(a, length);
//   return 0;
// }

//Write a program to reverse a given string.
// #include <stdio.h>
// #include <string.h>

// void reverseString(char str[]) {
//     int length = strlen(str);
//     for (int i = 0, j = length - 1; i < j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
// }

// int main() {
//     char string[25] = "Laur";
    
//     printf("Original string: %s\n", string);
//     reverseString(string);
//     printf("Reversed string: %s\n", string);
    
//     return 0;
// }


