#include <stdio.h>
#include <stdlib.h>

int atoi11(char s[]);

int main()
{
    char s[50],c;
    int i;

    for(i=0; i<10 && (c=getchar()) != '\n' && c!= EOF && c!= ' ';i++)
        s[i] = c;


    printf("%d", atoi11(s));
    printf("Hello world!\n");
    return 0;
}

int atoi11(char s[])
{
    int i,n;

    n=0;

    for(i=0; s[i]>='0' && s[i] <= '9';++i)
        n=n*10 + (s[i] - '0');

    return n;
}
