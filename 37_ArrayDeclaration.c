// Program to take 5 values from the user and store them in an array
//Writted by -- SUDHANSHU BHAGAT
//30-03-2021

#include <stdio.h> //Pre-Process directive to include standard input output header file.

int main() { // main function body starting
  int values[5]; // Array Declaration of size 5

  printf("Enter 5 integers: "); //input integers

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}