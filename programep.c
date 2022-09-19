 #include<stdio.h>
#include <math.h>
int main()
{
int x;int x2;int c=0;int d;
int x3;
printf("Please enter the number ");
scanf("%d",&x);
x2=x;
x3=x;
while (x2!=0)
{
c++;
x2=x2/10;
}
while (c!=0)
{
d=x/pow(10,c-1);
/printf("%d",d);/
c--;
if (d==1)
printf("one ");
if (d==2)
printf("two ");
if (d==3)
printf("three ");
if (d==4)
printf("four ");
if (d==5)
printf("five ");
if (d==6)
return 0;}
