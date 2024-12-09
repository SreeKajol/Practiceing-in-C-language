#include <stdio.h>
#include <stdlib.h>

int main()
{
    int itrtr=0,num,sum=0;
    float avg;
    printf("Please enter your numbers:\n");
    printf("Please enter -9999 if you want to exit:\n");

    //for(itrtr=0;;itrtr++)
    do
    {
        scanf("%d",&num);

        if(num == -9999)
        {
            break;
        }

        sum+=num;
        //sum=sum+num;
        itrtr++;

    }while(1);
    avg = sum/(float)itrtr;
    printf("\nThe maximum value is:%f",avg);

    switch(choice)
    {
    case 1:

        break;
    case 2:
        break;
    default:

    }

    return 0;
}
