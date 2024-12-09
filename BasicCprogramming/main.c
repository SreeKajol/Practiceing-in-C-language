#include <stdio.h>
#include <stdlib.h>

//int calSum(int a, int b);

int main ( )
{
    int sum;
    sum = calSum(5,6);
    printf("The sum is: %d",sum);
    return 0;
}

int calSum(int a, int b)
{
    return (a+b);
}
