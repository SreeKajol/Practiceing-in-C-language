#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}Book1;

int main( ) {
   struct Books Book2;        /* Declare Book1 of type Book */
   struct Books Book3;        /* Declare Book2 of type Book */
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali");
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495500;

   /* book 2 specification */
   strcpy( Book2.title, "C++ Programming");
   strcpy( Book2.author, "Jack");
   strcpy( Book2.subject, "C++ Programming Tutorial");
   Book2.book_id = 6495407;

   /* book 3 specification */
   strcpy( Book3.title, "Telecom Billing");
   strcpy( Book3.author, "Zara Ali");
   strcpy( Book3.subject, "Telecom Billing Tutorial");
   Book3.book_id = 6495700;

   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n\n\n", Book1.book_id);

   /* print Book2 info */
   printf( "Book 2 title : %s\n", Book2.title);
   printf( "Book 2 author : %s\n", Book2.author);
   printf( "Book 2 subject : %s\n", Book2.subject);
   printf( "Book 2 book_id : %d\n\n\n", Book2.book_id);

   /* print Book3 info */
   printf( "Book 3 title : %s\n", Book3.title);
   printf( "Book 3 author : %s\n", Book3.author);
   printf( "Book 3 subject : %s\n", Book3.subject);
   printf( "Book 3 book_id : %d\n\n\n", Book3.book_id);

   return 0;
}


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

