#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
   char bookname[50];
   char author[50];
   int no_of_pages;
   float price;
};
int main()
{
    struct library lib[100];
    int i=0,choice, count=0;
    do
    {
        printf("WELCOME TO BIT MESRA LIBRARY\n");
        printf("Press 1 to Add book information\n");
        printf("Press 2 to Display book information\n");
        printf("Press 3 to Show total no of books in the library\n");
        printf("Press 0 to Exit\n");
        scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        {
            printf("Enter book name = ");
            scanf("%s",lib[i].bookname);
            printf("Enter author name = ");
            scanf("%s",lib[i].author);
            printf("Enter pages = ");
            scanf("%d",&lib[i].no_of_pages);
            printf("Enter price = ");
            scanf("%f",&lib[i].price);
            count++;
            i++;
            break;
        }
        case 2:
        {
            printf(" _____________________________\n");
            printf("|                     |                       |                  |                  |\n");
            printf("|      BOOK NAME      |      AUTHOR NAME      |      PAGES       |       PRICE      |\n");
            printf("|_______|________|______|_______|\n");
            for(i=0; i<count; i++)
            {
            printf("|                     |                       |                  |                  |\n");
            printf("|      %s        |       %s        |       %d        |      %0.2f      |\n",lib[i].bookname,lib[i].author,lib[i].no_of_pages,lib[i].price);
            printf("|_______|________|______|_______|\n");
            }
            break;
        }
        case 3:
        {
            printf("No of books in library are: %d\n", count);
            break;
        }
    }
    }
    while(choice!=0);
    return 0;
}
