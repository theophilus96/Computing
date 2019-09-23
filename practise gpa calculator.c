#include<stdio.h>
#include<math.h>
#include<ctype.h>
double gradepoint(char,char);

int main(void)
{
double currentgpa, newgpa, gp;
int n, i, d, totalau, au;
char score, sign;

printf("Enter current CGPA => \n");
scanf("%lf", &currentgpa);

printf("Enter total AUs completed=> \n");
scanf("%d", &totalau);

printf("Enter number of letter-graded course taken in this semester => \n");
scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {

        printf("Enter AU and letter grade of course <n> in the form <AU><space><letter grade>(e.g. 3 B+): \n");

        scanf("%d %c%c", &au, &score, &sign);


        score = (toupper(score));
        gp = gradepoint(score, sign);

        newgpa = ( (currentgpa * totalau ) + (gp * au))/ (totalau + au);

        printf("Your new gpa is = %lf \n", newgpa);

        currentgpa = newgpa;
        totalau = totalau + au;

        }




return 0;
}

double gradepoint(char score,char sign)
{
  double gp;


    if (score == 'A' && sign == '+')
      gp = 5.0;
    else if (score == 'A' && sign == '\n')
      gp = 5.0;
    else if (score == 'A' && sign == '-')
        gp = 4.5;
    else if (score == 'B' && sign == '+')
        gp = 4.0;
    else if (score == 'B' && sign == '\n')
        gp = 3.5;
    else if (score == 'B' && sign == '-')
        gp = 3.0;
    else if (score == 'C' && sign == '+')
        gp = 2.5;
    else if (score == 'C' && sign == '\n')
        gp = 2.0;
    else if (score == 'D' && sign == '+')
        gp = 1.5;
    else if (score == 'D' && sign == '\n')
        gp = 1.0;
    else if (score == 'F' && sign == '\n')
        gp = 0.0;
    else
        gp = 0.0;

        return gp;
}




