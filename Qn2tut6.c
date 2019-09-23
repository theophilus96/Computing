#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(void)
{

  int num, sum=0;
  char do_again;

    for(num=0; num <=100; num++)

    {

      sum = ((num)*(3) + 1);

        printf("sum = %d\n", sum);


    }

      do_again = 'Y';

        while (do_again == 'Y')

          {

              for(num=0; num <=100; num++)

                {

                  sum = ((num)*(3) + 1);

                    printf("sum = %d\n", sum);

                }



                    printf("Solve again (y/n)?\n");
                    fflush(stdin);
                    do_again = toupper(getchar());

          }





return 0;
}






/*

Write a for loop to count from 1 to 100 in steps of 3, i.e. display 1, 4, 7, 10, 13…,
where the difference between a number and its immediate neighbor is 3.
Repeat using a while loop and then a do while loop.

*/
