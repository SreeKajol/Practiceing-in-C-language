#include <stdio.h>
#include <stdlib.h>

int bitCount(unsigned x)
{
    int b;

    for(b=0; x!= 0; x>>=1)
    {
        if(x&01)
        {
            b++;
        }
    }

    return b;

}

int main()
{
    int a= 0;
    printf("Enter an integer\n");
    scanf("%d",&a);
    printf("No. of 1 = %d\n", bitCount(a));
    return 0;
}
