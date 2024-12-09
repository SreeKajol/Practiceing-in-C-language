#include <stdio.h>
#include <stdlib.h>

struct timeMember
{
    int sec;
    int min;
    int hour;
};

int main()
{
    struct timeMember time;
    printf("Please enter the time\n");

    printf("hour:");
    scanf("%d",&time.hour);
    printf("\n min:");
    scanf("%d",&time.min);
    printf("\n sec:");
    scanf("%d",&time.sec);
    printf("\n");

    printf("The time is %d:%d:%d",time.hour,time.min,time.sec);
    printf("\n\n\n\n\n\n");

    return 0;
}
