#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i=0, n=55;

    for(i=0;i<n;i++)
    {
        printf("%6d%c", i,(i%10==9 || i==n-1) ? '\n': ' ');
    }
    printf("Hello world!\n");
    return 0;
}
