#include <stdio.h>
#include <stdlib.h>

int rSum(int x);

int main()
{
    printf("Hello world!\n");

    int n,i,sum=0;
    printf("please enter the value of N\n");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        sum += i;
    }

    printf("The summation of 0 to n is: %d \n",sum);

    sum = rSum(n);
    printf("The summation of 0 to n is: %d \n",sum);

    return 0;
}

int rSum(int x)
{
    if(x>=1)
    {
       return x + rSum(x-1);
    }
    else
        return 0;

}
