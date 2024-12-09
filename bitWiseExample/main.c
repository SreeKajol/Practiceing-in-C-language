#include <stdio.h>
#include <stdlib.h>

unsigned getBits(unsigned x, int p, int n)
{
    return (x>>(p+1-n)) & ~(~0<<n);
}
int main()
{
    unsigned int x;
    int p;
    int n;

    printf("please enter the value of x, p and n\n");
    scanf("%u %d %d",&x, &p, &n);

    printf("The modified value of x is: %d", getBits(x, p, n) );
    return 0;
}
