/*TENG YI ZHUO, BENJAMIN / U1720018E / TUTORIAL: B02 */
/*
Write a C program to

A. Generate a random number array with 5 elements, consisting of whole numbers between 10
and 50. Call a function to cycle each of the 5 elements circularly by 3 places. This means
that the first element will be replaced by the fourth element and so on.

“B.Also generate a random number matrix of dimensions 4X5 in which the third column will be the previously generated random number array obtained as a result of the cycling operation. Now shift the third column to the second column in this matrix and copy the second column to the third column.“

It should be "rows" instead of "columns" because a 4x5 matrix has 4 rows and  5 columns and the generated array will fit in as a row and not a column.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int array1[5];
int fn1(int array1[]);
int array2[4][5];
int fn2(int array2[4][5]);
int i,j;

int main(void)
{
srand(time(NULL));

 for(i=0;i<5;i++) /* generate array 1 */
 {
    array1[i] = rand()%41+10;
 }

printf("1st array\n");
 for(i=0;i<5;i++)/* check array 1*/
 {
    printf("%d ", array1[i]);
 }
 printf("\n\n");

 fn1(array1);

for(i=0;i<4;i++) /* generate 4x5 array 2 */
{
for(j=0;j<5;j++)
{
array2[i][j]= rand()%41+10; ;
}
}

printf("\nmatrix\n");
for(i=0;i<4;i++)/* check array 2*/
{
    for(j=0;j<5;j++)
    {
    printf("%d ", array2[i][j]);
    }
printf("\n");
}

for(j=0;j<5;j++)/* transfer array1 to row 3 */
    {
        array2[2][j] = array1[j];
    }

printf("\nmatrix with cycled 1st array inserted into 3rd row\n");
for(i=0;i<4;i++)/* check new array 2*/
{
for(j=0;j<5;j++)
{
printf("%d ", array2[i][j]);
}
printf("\n");
}

 fn2(array2);

printf("\nmatrix with 2nd and 3rd row swapped\n");
for(i=0;i<4;i++)/* check array 2 with swapped rows*/
{
for(j=0;j<5;j++)
{
printf("%d ", array2[i][j]);
}
printf("\n");
}
 return 0;
}

int fn1(int array1[]) /* cycle array */
{
    int a,b,c,d,e;

    a=array1[0];
    b=array1[1];
    c=array1[2];
    d=array1[3];
    e=array1[4];

    //array1[0] + 3 = a;
    //array1[1] + 3 = b;
    //array1[2] + 3 = c;
    //array1[3] + 3 = d;
    //array1[4] + 3 = e;



    array1[0]=d;
    array1[1]=e;
    array1[2]=a;
    array1[3]=b;
    array1[4]=c;


    printf("1st array cycled\n");
    for(i=0;i<5;i++)
 {
    printf("%d ", array1[i]);
 }
 printf("\n");
 return array1[5];
}

int fn2(int array2[4][5]) /*swap row 2 and 3 */
{
int i;
int row2[5], row3[5];

for(i=0;i<5;i++)
{
    row2[i] = array2[1][i];
}

for(i=0;i<5;i++)
{
    row3[i] = array2[2][i];
}


for(i=0;i<5;i++)
{
    array2[1][i] = row3[i];
}

for(i=0;i<5;i++)
{
    array2[2][i] = row2[i];
}


return array2[4][5];

}
