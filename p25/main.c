#include <stdio.h>
#include <stdlib.h>

int power(int base, int n);
int main()
{
    int i;
    for(i=0;i<10;i+=3)
        printf("%d %d %d\n", i,power(2,i),power(-2,i));
    return 0;
}

int power(int base, int n)
{
    int i,p;
    p=1;

    for(i=1;i<=n; ++i)
        p= p*base;
    return p;
}
