#include<stdio.h>
#include<math.h>
#include<ctype.h>
double gradepoint(char);
double formula()

int main(void)
{
double cgpa, tau, au;
int lgc, i;

printf("Enter current CGPA:/n");
scanf("%lf",&cgpa);

printf("Enter current total AUs completed:/n");
scanf("%lf",&tau);

printf("Enter number of letter-graded courses taken in this semester:/n");
scanf("%lf",&lgc);

    for (i=0; i<lgc; i++)

    {

        printf("Enter AU and letter grade of course 1 in the form/n");

        printf("<AU><space><letter grade>(e.g. 3 B+):/n");
        scanf("%lf %c",&au, &score );


    }




New CGPA = {[Current CGPA * Total AU Completed] + [Grade Point * Course 1 AU] + [Grade Point * Course n AU]}/{[Total AU Completed] + [Course 1 AU] + [Course n AU]}

ncgpa = ( cgpa *  tau ) + ( gp * au ) +

return 0;
}

double gradepoint(double gp):
{
    switch(au)
    {
        case 'A+' :
        case 'A' : (gradepoint = 5.0);
        break;

        case 'A-' : (gradepoint = 4.5);
        break;

        case 'B+' : (gradepoint = 4.0);
        break;

        case 'B' : (gradepoint = 3.5);
        break;

        case 'B-' : (gradepoint = 3.0);
        break;

        case 'C+' : (gradepoint = 2.5);
        break;

        case 'C' : (gradepoint = 2.0);
        break;

        case 'D+' : (gradepoint = 1.5);
        break;

        case 'D' : (gradepoint = 1.0);
        break;

        case 'F' : (gradepoint = 0.0);
        break;

        default: (gradepoint = 0.0);

    }



}

