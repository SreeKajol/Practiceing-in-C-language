#include<stdio.h>
int main()
{
    int z[9]={2,5,6,8,10,12,14,16,18};
    int i=0;
    int *ip;
    ip=&z[0];

   printf("*(ip+2)=%d\n",*(ip+2));
    printf("*ip=%d\n",*ip);

    *(ip=ip+2);
    printf("*(ip=ip+2)=%d\n",*ip);

    *ip=*ip+10;

    printf("*ip=*ip+10=%d\n",*ip);

    ++*ip;
    printf("++*ip=%d\n",*ip);


    *ip=*ip+10;
    printf("*ip=*ip+10 = %d\n",*ip);

    ++(*ip);
    printf("++(*ip) =%d\n",*ip);
    (*ip)++;
    printf("(*ip)++ =%d\n",*ip);
    *ip++;
    printf("*ip++   =%d\n",*ip);

    i=1;

    return 0;
}

    /*printf("++*ip = %d\n", ++*ip);
    printf("(*ip)++ = %d\n", (*ip)++);

    //(*ip)++
    //printf("(*ip)++ = %d\n", *ip);

    *ip++;
    printf("*ip++ = %d\n", *ip);


    i=1;*/

    //*ip++;
    //++*ip;
    //*++ip;
    //printf("++(*ip)=%d  x=%d\n",++(*ip),x);
    //printf("++(*ip)=%d  x=%d\n",(*ip)++,x);
    //printf("++(*ip)=%d  x=%d\n",*ip++,x);
    //ip=&x;
    //y=*ip;                 //y is now 1

    //printf("y=%d \n",y);

    //*ip=0;     // x is 0 now

    //printf("x=%d\n",x);
    //*ip=*ip+10;
    //printf("x=%d\n",x);
//if ip points to an integer x, then *ip can  occure in any context where x could
// without parenthesis the pointer would point ip instead of what pointer point to (x).


