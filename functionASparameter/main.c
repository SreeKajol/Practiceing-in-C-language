#include <stdio.h>
void printN();
void printM();
void greetings(void (*f)());


int main()
{
    int i=0;
    greetings((void (*)())(i? printM: printN));
    return 0;
}

void greetings(void (*f)())
{
    f();
}

void printM()
{
   printf("Good Morning\n");
}

void printN()
{
   printf("Good Night\n");
}
