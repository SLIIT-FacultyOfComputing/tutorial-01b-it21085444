/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int a, b, c;
  float avg;

  printf("Enter Subject 1  :");
  scanf("%d", &a);


  printf("Enter Subject 2 :");
  scanf("%d", &b);

  c = a + b;
  avg = c/2.0;

  printf("Average is : %.2f", avg);
  
  return 0;
}

