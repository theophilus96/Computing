#include <stdio.h>
#include <math.h>
int main(void)
{

  float x;
  printf("Please input a character => ");
  scanf("%f", &x);
  {
   if ('a' <= x && x <= 'z');
       printf("%f is a lowercase letter.", x);
   else
       printf("%f is not a lowercase letter.", x);
  }
  return 0;
  }
