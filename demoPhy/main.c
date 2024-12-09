#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,val[100];
    float n,avg;

    printf("How many values you want to calculate average\n");
    scanf("%f",&n);

    printf("\nPlease enter the values\n");

    for(int i = 0; i<n; i++)
    {
        printf("\n val[%d]=",i);
        scanf("%d",&val[i]);
    }

    for(int j = 0; j< n; j++)
    {
        sum=sum+val[j];
    }
    avg = sum/n;

    printf("The average value is:= %.2f", avg);



    return 0;
}

/*int main()
{
    char str1[50],str2[50],k=0;

    printf("Please enter your string\n");
    scanf("%[^\n]",str1);
    //scanf("%S",str);

    int length = strlen(str1);

    for(int i=length-1;i>=0;i--)
    {
        printf("%c",str1[i]);
    }

    int z=0;

    return 0;
}*/
