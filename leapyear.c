#include<stdio.h>

int main()
{
    int yr;int i;int lpf=0;
    printf("Please enter the year  ");
    scanf("%d",&yr);
    if (yr%4==0)
    {
    if (yr%100==0 && yr%400==0);
    lpf=1;
    if (yr%100!=0)
    lpf=1;
	}
	if (lpf==1)
	printf("Leap year\n");
	else 
	printf("Not a leap year\n");
	
	