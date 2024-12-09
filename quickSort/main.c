#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAXNUMBER 2000

int val[]= {3,5,2,7,8,9,10,13,11};

void swap(int *v, int i, int j)
{
    int *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
void qsort(int *v, int left, int right)
{
    int i, last;
    void swap(int *v, int i, int j);
    if (left >= right) return;
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++)
    {
        if(v[i]<v[left])
        {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}


int main()
{
    int k;

    qsort(val, 0, 8);

    for(k=0;k<=8;k++)
    {
        printf("%d \n", val[k]);
    }

    k=0;
    return 0;
}

