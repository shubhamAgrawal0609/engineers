#include<stdio.h>
#include <math.h>

float sin(int a);
int disp(float a);


 int main()
 {
   float a;
   printf("Enter the x to calculate its sine ");
    scanf("%f",&a);
    disp(a);
 }
 
 float sin(int a)
 {
   int i,j,p=1;float sx=0;
   for (i=1;i<=50;i=i+2)
    {
      p=1;
      for (j=1;j<=i;j++)
      {
        p=p*j;
    }
    sx=sx+pow(a,i)*pow(-1,(2*i+6)/4)/p;
  }
  return sx;
 }
 
 int disp(float a)
 {
     printf("\nSine value of %f is %.5f",a,sin(a));
    printf("\nNumber of terms used = 50.");
 }

 
