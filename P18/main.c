#include <stdio.h>
#include <stdlib.h>

//count characters..
int main()
{
    long nc;
    nc=0;
    while(getchar()!= EOF)
        ++nc;
    /*for(nc=0;getchar() != EOF; ++nc)
        ;*/
    printf("%ld\n",nc);
    return 0;
}
