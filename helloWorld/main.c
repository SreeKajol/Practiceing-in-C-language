#include <stdio.h>


int main()
{
    int i,j,sum;
    float avg;
    printf("Please enter two integer numbers:\n");
    scanf("%d %d",&i,&j);

    sum=i+j;
    avg = sum/2.0;

    printf("\nThe sum of %d and %d is:%d",i,j,sum);
    printf("\nThe average is: %f",avg);
    //printf("Mosaddik Hasan!\n");
    //printf("CE0301012!\n");
    return 0;
}
