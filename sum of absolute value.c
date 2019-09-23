#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
int n, num, sum=0, x, y=0;
printf("Enter number of integers =>\n");
scanf("%d", &n);

for (x=1;x<=n;x++)
{
printf("Enter number to add =>\n");
scanf("%d", &num);
fabs(num);

sum+=fabs(num);
printf("sum = %d\n", sum);

if (num>0)
{
y++;
}
printf("number of positive numbers = %d\n", y);

}


return 0;
}
