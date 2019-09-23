#include <stdio.h>
#define ARRAYSIZE 81

int main (void)
{
    FILE *in;
    char ch;
    int length = 0;
    int count[ARRAYSIZE] = {0};
    int i,j;

    if ((in = fopen("input.txt", "r"))==NULL)
    {
        printf("Error accessing in.txt!\n");
        return 1;
    }

    while((ch = fgetc(in)) != EOF)
        if(ch != ' ' && ch != '\t' && ch != '\n')//space, tab or newline
            length++;
        else
        {
            count[length]++;
            length=0;
        }
    printf("Length of Word\tHistogram(Count)\n");
    printf("==============\t================\n");
    for(i=1;i<81;i++)
    {
        printf("%14d\t", i);
        for(j=0;j<count[i];j++)
            printf("*");
        printf("\n");
    }
return 0;
}
