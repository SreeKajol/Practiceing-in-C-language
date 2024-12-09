#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[50];
    int i=0,j;
    printf("please enter your name:\n");

    while((c[i]=getchar())!='\n')
    {
      i++;
    }

    printf("\n\nyour name is:\n");

    for(j=i-1;j>=0;j--)
    {
        printf("%c",c[j]);
    }

    //printf("\nHello world!\n");
    return 0;
}
