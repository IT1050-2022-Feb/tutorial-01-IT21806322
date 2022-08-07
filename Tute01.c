/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>


int main() {
  int s1,s2,total;
  float avg;
  

  printf("Enter the marks of first subject:");
  scanf("%d",&s1);

  printf("Enter the marks of second subject:");
  scanf("%d",&s2);

  total=s1+s2;
  printf("Total marks: %d",total);
  
  avg=total/2;
  printf("This is the average of the two subjects:%.2f",avg);
  
  return 0;
}

