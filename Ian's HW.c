/*Write and compile a C program that can classify 50 students into groups according to their heights.
Randomly generate these 50 heights and classify them into 4 groups based on heights between 4 ft.
and 6 ft. in 0.5 ft intervals (such as 4 -4.5, 4.6 – 5.0, 5.1 -5.5, 5.6 - 6).
Use appropriate loops, library functions and decision making statements learnt from previous tutorials.
Round off to nearest decimals wherever applicable (for example, 4.56 feet is rounded to 4.6 feet).
Please attach the output along with your program.*/







#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=0;
    double random_value;

    srand((unsigned) time(NULL));



    printf("| 4.0 - 4.5 | 4.6 - 5.0 | 5.1 - 5.5 | 5.6 - 6.0 |\n");
    printf("_________________________________________________\n");


    while(i<50){
    random_value = (double)rand()/RAND_MAX*2.0+4.0;


    if(random_value>=4.0 && random_value<=4.5){
    printf ( "%8.1f\n", random_value);
    i++;
    }
    if(random_value>=4.6 && random_value<=5.0){
    printf ( "%20.1f\n", random_value);
    i++;
    }
    if(random_value>=5.1 && random_value<=5.5){
    printf ( "%32.1f\n", random_value);
    i++;
    }
    if(random_value>=5.6 && random_value<=6.0){
    printf ( "%44.1f\n", random_value);
    i++;
    }

    }
    return 0;

}
