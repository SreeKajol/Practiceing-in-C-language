#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //printf("Hello world!\n");
    int i;
    for(i=1; i<argc; i++)
        printf("%s%s", argv[i], (i<argc-1)? " " : "");
    printf("\n");
    return 0;
}