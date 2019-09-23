#include <stdio.h>
#include <math.h>

int main(void)
{
float x,y,z;
int c;
x=3;
y=5.5;
z=20;

c=12/(x-y)*5+z/8-2;
printf("c = %d\n", c);

floor(c);
printf("c =%d\n", c);

return 0;
}
