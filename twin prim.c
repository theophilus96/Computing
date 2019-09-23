/*
 “Twin Primes” is a pair of prime numbers whose difference
is 2.
 e.g. (3, 5), (11, 13)
 Write a program that receives an integer number from the
user and outputs all the twin primes up to (and including)
that number.
 For example:
 Input: 7
 Output: (3,5), (5,7)
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int prime(int);

int main(void)
{
int n, i, j;
printf("input end number = \n");
scanf("%d", &n);

    for ( i=3; i< n-1; i++)
    {
        if (prime(i) == 1 && prime(i+2) == 1)
        {
            printf("The twin prime number are %d and %d\n", i, (i+2));
        }



    }
return 0;
}

int prime(int i)
{
    int j;
    for (j=2 ; j< i; j++)
    {
      if (i%j == 0)
      {
      return 0;
      }
      else
      {
      return 1;

      }


    }
}



