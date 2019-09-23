#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void)
{
int i,j, sum;

for (i = 1; i <= 12; i++)
  {
    printf("%d ", i);

    for (j = 1; j<= 12; j++)

    {
      sum = j * i;
      printf("%d ", sum);
    }

    printf("\n");


  }
  printf("\n");


return 0;
}
