#include <stdio.h>

struct StudentData{
    int stu_id;
    float stu_GPA;
};

int main()
{
     struct StudentData *st;
     st=(struct StudentData*)malloc(10*sizeof(struct StudentData));
     //st =(int*)malloc(10*sizeof(int));

     return 0;
}
