#include<stdio.h>
#include <math.h>
int main()
{ float number,n=0,p;int i,j;
printf("Enter the x to calculate its sine");
scanf("%f",&number);
for (i=1;i<=51;i=i+2)
{
p=1;
for (j=1;j<=i;j++)
{
p=p*j;
}
n=n+pow(number,i)*pow(-1,(2*i+6)/4)/p;
}
printf("\nSine value is %.5f",n);
return 0;}
