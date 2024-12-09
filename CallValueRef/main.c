#include<stdio.h>

void swapVal(int n,int m);
void swapRef(int *u,int *v);

int main()
{
    int x,y;
    printf("Please enter Two Numbers\n");
    scanf("%d%d",&x,&y);
    printf("Outcome before call by value\n");
    printf("x = %d   y =  %d\n\n",x,y);
    swapVal(x,y);                    //swap copies of two value
    printf("Outcome after call by value\n");
    printf("x = %d   y =  %d\n\n",x,y);
    swapRef(&x,&y);

    printf("Outcome after call by reference\n");
    printf(" x  =  %d   y = %d\n",x,y);
    return 0;
}

void swapVal(int n,int m)
{
    int temp=n;
    n=m;
    m=temp;
    printf("Outcome in  call by value function \n");
    printf("x = %d   y =  %d\n\n",n,m);
}

void swapRef(int *u,int *v)
{
    int temp=*u;
    *u=*v;
    *v=temp;

}
