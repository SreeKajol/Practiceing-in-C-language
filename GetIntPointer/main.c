#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


int getint(int *pn)
{
    int c, sign;

    while (isspace(c=getch()))
        ;

    if( !isdigit(c) && c !=EOF && c !='+' && c != '-')
    //if (!isdigit(c) && c!=EOF  && c != '+' && c !='-')
    {
        ungetch(c);
        return 0;
    }

    sign = (c=='-')? -1:1;

    if ( c == '+' || c == '-')
        c=getch();

    for(*pn =0; isdigit(c); c=getch())
        *pn = 10 * *pn + (c-'0');

    *pn *= sign;

    if(c!=EOF)
        ungetch(c);
    return c;
}

int main()
{
    int a;
    printf("Hello world!\n");
    getint(&a);
    printf("%d",a);
    return 0;
}
