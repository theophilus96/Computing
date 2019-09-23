#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
char c, do_again;

printf("Enter an alphanumeric number => \n");
scanf("%c", &c);

do_again = 'Y';
while (do_again == 'Y')

{

if(isalnum(c))
{
  if(isalpha(c))
  {
  printf("you have entered an alphabet %c\n", c);
  }
  else
  {
  printf("You have entered a digit %c\n", c);
  }
}
else
{
  printf("You did not enter an alphanumeric number\n");
  printf("Enter an alphanumeric number => \n");
  fflush(stdin);
  scanf("%c", &c);


}

printf("Solve again (y/n)? \n");
 fflush(stdin);
 do_again = toupper(getchar());

}

return 0;
}
