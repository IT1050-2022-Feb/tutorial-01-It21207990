/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int no;
  int sum=0;
  int i;

  printf("enter the number :");
  scanf("%d",&no);
  
  for(i=1; i<=no; i++)
  {
    sum=sum+i;

  }
  printf("sum of the numbers from 1 to %d is : %d",no,sum);
  
  
  return 0;
}

