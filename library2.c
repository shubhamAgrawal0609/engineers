#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library{
   char bookname[50];
   char author[50];
   int noofpages;
   float price;
};
int main(){
   struct library lib[100];
   char bookname[30];
   int i,j, keepcount;
   i=j=keepcount = 0;
   while(j!=6){
      printf("\n1. Add book information\n");
      printf("2.Display book information\n");
      printf("3. no of books in the library\n");
      printf("4. Exit");
      printf ("\n\nEnter one of the above : ");
      scanf("%d",&j);
      switch (j){
         
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keepcount++;
            i++;
            break;
         case 2:
            printf("---------------------------------------------------------------------------------------------\n");
            printf("********************you have entered the following information**********************\n");
            printf("\n");
            printf("---------------------------------------------------------------------------------------------\n");
            printf("                                      |ALL BOOK DETAILS |                  \n ");
            printf("---------------------------------------------------------------------------------------------\n");
            printf("\n");
            printf("\n");
                printf("name\t      author name\t   pages\t      price\t \n");
                printf("---------------------------------------------------------------------------------------------------------------------\n");
            
			   while(i!=0){
               	 printf ("%s\t  |          %4s\t   |          %4d\t   |           %5f\t| \n ",lib[i].bookname,lib[i].author,lib[i].noofpages,lib[i].price);
                 i=i-1;
               
            }
            
         case 3:
            printf("\n No of books in library : %d", keepcount);
            break;
         case 4:
            exit (0);
      }
   }
   return 0;
}
