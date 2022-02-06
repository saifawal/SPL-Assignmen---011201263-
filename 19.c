#include<stdio.h>

int sumOfRange(int);

int main() {
   int a, sum;

   printf(" Input the last number of the range starting from 1 : ");
   scanf("%d", &a);

   sum = sumOfRange(a);
   printf("The sum of numbers from 1 to %d : %d\n\n", a, sum);

   return (0);
}

int sumOfRange(int a)
{
   int res;
   if (a == 1)
   {
      return (1);
   } else
   {
      res = a + sumOfRange(a - 1);
   }
   return (res);
}


