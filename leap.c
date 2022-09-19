#include<stdio.h>

int main()
{
    int yr;
    int count=0;
    printf("Please enter the year");
    scanf("%d",&yr);
    if (((yr%100==0) && (yr%400))|| (yr%100!=0))
       {count++;
    printf("this is a leap year");}


	else{
	      printf("Not a leap year\n");}
	return 0;}


