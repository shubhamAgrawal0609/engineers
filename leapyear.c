#include<stdio.h>

int main()
{
int yr;int i;int lpf=0;
printf("Please enter the year to check the year ");
scanf("%d",&yr);
if (yr%4==0)
{
   if ( yr%100==0 && yr%400==0)
    {printf("leap year");
	}
if (yr%4==0){

	if (yr!=0){
		printf("leap lear");
	}
}

else{

printf("Not a leap year\n");}
int l;int u;
printf("Enter lower limit of year range ");
scanf("%d",&l);
printf("Enter the upper limit of year range ");
scanf("%d",&u);
for (i=l;i<=u;i++)
{
lpf=0;
if (i%4==0)
{
if (i%100==0 && i%400==0){

lpf=1;
if (i%100!=0){

lpf=1;
}
if (lpf==1)
{
printf("%d",i);
printf(" \n");
} 


