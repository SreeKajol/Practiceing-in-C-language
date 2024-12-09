#include <stdio.h>
#include <stdlib.h>

int strlen1(char *pS);

int main()
{
    //printf("Hello world!\n");
    char S[50];
    printf("Enter a String\n");
    gets(S);

    printf("%d", strlen1(S));
    //printf("%s",S);
    return 0;
}


int strlen1(char *pS)
{
    int n;

    for(n=0; *pS !='\0'; pS++)
        n++;

    return n;
}
