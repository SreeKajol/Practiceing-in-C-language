#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='a';
    switch(ch)
    {
    case'a':
        printf("A");
    case'b':
        printf("B");
    default:
        printf("C");
    }
    return 0;
}
