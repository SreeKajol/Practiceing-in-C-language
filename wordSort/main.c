#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAXLINES 2000
#define MAXLEN 1000
#define ALLOCSIZE 10000
char *lineptr[MAXLINES];
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);
char *alloc(int);
int getline(char *, int);
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

int getline(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n)
    {
        allocp += n;
        return allocp - n;
    }
    else
        return 0;
}
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines=0;
    char *p, line[MAXLEN];
    while ((len = getline(line, MAXLEN)) > 0)
    {
        p=alloc(len);
        line[len-1] = '\0';
        strcpy(p, line);
        lineptr[nlines++] = p;
    }
    return nlines;
}
void writelines(char *lineptr[], int nlines)
{
    int i;
    for (i = 0; i < nlines; i++) printf("%s\n", lineptr[i]);
}
void swap(char *v[], int i, int j)
{
    char *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
void qsort(char *v[], int left, int right)
{
    int i, last;
    void swap(char *v[], int i, int j);
    if (left >= right) return;
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++)
    {
        if (strcmp(v[i], v[left]) < 0)
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
    int nlines;
    nlines=readlines(lineptr, MAXLINES);
    qsort(lineptr, 0, nlines-1);
    writelines(lineptr, nlines);
    return 0;
}

