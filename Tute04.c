/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int x, int y);
int maximum(int p, int r);
int multiply(int z, int q);
int main() {
   int no1, no2;

   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int x, int y)
{
  if(x<y)
  return x;
  else
  return y;

}
int maximum(int p, int r)
{
  if(p>r)
  return p;
  else
  return r;

}
int multiply(int z, int q)
{
  return z*q;
}