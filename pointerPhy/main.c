#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *val,n;

    printf("Please enter the number of values you want to work with:\n");
    scanf("%d",&n);

    val=(int*)malloc(n*sizeof(int));

    printf("Please enter the values\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",(val+i));
    }

    printf("The values in reverse order:");

    for(int j=n-1;j>=0;j--)
    {
        printf("\n %d",*(val+j));
    }

    //printf("Hello world!\n");
    return 0;
}
