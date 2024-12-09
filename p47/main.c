#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0, x=0, y=0, z[]= {1,2,3,4,5,6,7,8,9};

    printf("x=%d \t   y=%d\n\n", ++x,y++);

    printf("x=%d \t   y=%d\n\n\n", x,y);

    z[x++]=++x;
    z[++y]=++y;

    for(i=0; i<9; i++)
    {
        printf("z[%d] = %d\n", i, z[i]);
    }
    return 0;
}
