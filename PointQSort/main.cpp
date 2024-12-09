#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXLINES 5000
#define MAXLEN 100
char *lineptr[MAXLINES];          //pointer to the text lines
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[],int nlines);
void qsort1(void *lineptr[], int left, int right,int (*comp)(void *, void *));
int numcmp(char *, char *);
int main(int argc, char *argv[])
{
    int nlines;
    int numeric=0;
    if(argc>1 && strcmp(argv[1],"-n")==0)
    {
        numeric=1;
    }
    if((nlines=readlines(lineptr,MAXLINES))>=0)
    {
    qsort1((void **)lineptr,0,nlines-1,(int (*)(void*, void*))(numeric ?  numcmp : strcmp));    //& (like ) address
        writelines(lineptr,nlines);
        return 0;
    }
    else
    {
        printf("Too big !! to sort \n\n");
        return 1;
    }
}
void qsort1(void *v[], int left, int right, int (*comp)(void *, void *))
{
    int i,start,last;
    void Swap(void *v[], int ,int);
    if(left>=right)  //do nothing if array contain fewer than two elements
    {
        return ;
    }
    last=left;
    for(i=left+1;i<=right;i++)
    {
        if((*comp)(v[i],v[left])<0)
        {
            Swap(v,++last,i);
        }
    }
    Swap(v,left,last);
    qsort1(v,left,last-1,comp);
    qsort1(v,last+1,right,comp);

}
double atop(char *);
int numcmp(char *s1,char *s2)
{
    double v1,v2;
    v1=atop(s1);
    v2=atop(s2);
    if(v1<v2)
    {
        return -1;
    }
    else if(v1>v2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Swap(void *v[], int i,int j)
{
    char *temp;
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
int getline1(char *,int );
char *alloc(int n);
int readlines(char *lineptr[],int maxlines)
{
    int nlines,len;
    char *p,line[MAXLEN];
    nlines=0;
    while((len=getline1(line,MAXLEN))>0)
    {
        if(nlines>=maxlines || (p=alloc(len))==NULL)
        {
            return -1;
        }
        else
        {
            line[len-1]='\0';
            strcpy(p,line);
            lineptr[nlines++]=p;
        }
    }

    return nlines;
}
void writelines(char *lineptr[], int nlines)
{
    int i;
    for(i=0;i<nlines;i++)
    {
        printf("%s\n",lineptr[i]);
    }
}
int getline1(char *s, int lim)
{
    int c;
    char *t=s;    //  char t[]
    while( --lim>0 && (c=getchar())!=EOF && c!='\n')
    {
        *s++=c;     //s[i]=c; i++;
    }
    if(c=='\n')
    {
        *s++=c;    //s[i]=c;

    }
    *s='\0';

    return s-t; //length
}
double atop(char *s)    //page 71
{
    double val,power;
    int i,sign;
    for(i=0;isspace(*s);i++)
    {
        ;
    }
    sign=(*s=='-')?-1:1;
    if(*s=='+' || *s=='-')
    {
        *s++;
    }
    for(val=0.0; isdigit(*s);val++)
    {
        val=val*10.00+(*s-'0');

    }
    if(*s=='.')
    {
        *s++;
    }
    for(power=1.0 ;isdigit(*s);i++)
    {
        val=10.00 *power+(*s-'0');
        power*=10.00;
    }

    return sign *val/power ;

}
#define Allocsize 1000
static char allocbuf[Allocsize];
static char *allocp=allocbuf;
char *alloc(int n)       //page 101  //character type pointer
{
    if((allocbuf+Allocsize-allocp)>=n)
    {
        allocp+=n;
        return allocp-n;
    }
    else
    {
        return 0;
    }
}
//the program sorts input lines numerically
// instead of lexicographically if an optional argument





