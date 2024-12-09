#include<stdio.h>
int main()
{
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};

    printf("%d\n",**matrix);
    printf("%d\n",*(*(matrix + 0)));
    printf("%d\n",*(*(matrix + 0) + 0));
    printf("%d\n",*(*matrix + 1));
    printf("%d\n",*(*(matrix + 0) + 1));
    printf("%d\n",*(*(matrix + 2) + 2));

    return 0;
}

