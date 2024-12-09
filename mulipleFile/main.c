#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int n;
    printf("Enter a number please..\n");
    scanf("%d",&n);
    int x = multi2(n);
    printf("The multiplied value is = %d",x);
    return 0;
}
