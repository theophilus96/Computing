#include <stdio.h>

int num_lines(FILE *fptr)
{
    int lines=0;
    char ch;

    while ((ch = fgetc(fptr)) != EOF)
        if(ch=='\n') lines++;
    return lines;
}
