#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number!\n");
    scanf("%d",&n);
    int x = multiplier(n);
    printf("multiplied value = %d",x);

    return 0;
}
