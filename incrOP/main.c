#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i[50][50], j, m=0,n=1;

    printf("%d\n",++m);
    //i = ++m;
    m=0;
    printf("%d\n",m++);
    printf("%d\n",m++);

    //i = m++
    //printf("Hello world!\n");
    return 0;
}
