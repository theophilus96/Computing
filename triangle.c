#include<stdio.h>
#include<math.h>
#include<ctype.h>
int triangle(int);

int main(void)
{
int n;

printf("Input top base length =>");

printf("The top base length has to be and odd number");
scanf("%d", n);



return 0;
}

int triangle(int n)
{
for (i = n; i > 2; i-2)

  {
    printf("X");

    for (j = 1; j<= 12; j++)

    {
      sum = j * i;
      printf("%d ", sum);
    }

    printf("\n");

  }

}
