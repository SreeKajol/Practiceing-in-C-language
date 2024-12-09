#include <stdio.h>
#include <stdlib.h>


struct stu_address
{
  int street;
  char *state;
  char *city;
  char *country;
};
struct stu_data
{
  int stu_id;
  int stu_age;
  char *stu_name;
  struct stu_address stuAddress;
};
int main(){
  struct stu_data *mydata;
  mydata = (struct stu_data*)malloc(10*sizeof(struct stu_data));

  /*for(int i=0;i<10;i++)
  {
      mydata[i].stuAddress.country = (char*)malloc(16*sizeof(char));
      mydata[i].stu_name = (char*)malloc(16*sizeof(char));
  }*/


  for(int i=0;i<10;i++)
  {
      (mydata+i)->stuAddress.country = (char*)malloc(16*sizeof(char));
      (mydata+i)->stu_name = (char*)malloc(16*sizeof(char));
  }



  for(int l=0;l<2;l++)
  scanf("%s",(mydata+l)->stuAddress.country);

  /*for(int l=0;l<2;l++)
  scanf("%s",mydata[l].stuAddress.country);*/

  printf("Printing student Data: ");

  for(int m=0;m<2;m++)
  printf("\nStudent country: %s",(mydata+m)->stuAddress.country);

  /*for(int m=0;m<2;m++)
  printf("\nStudent country: %s",mydata[m].stuAddress.country);*/


  int k=0;
  return 0;
}
