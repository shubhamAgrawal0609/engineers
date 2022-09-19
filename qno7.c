#include<stdio.h>
#include <math.h>
int main()
{
  int p=0;
  double i;
  double x[100][2];
  //this is the programe to find square root from o to 0.99
  printf("Number \tsquare root\n");
  for (i=0.0;i<9.9;i=i+0.1)
  {
    
    x[p][0]=i;
    p++;
    x[p][1]=sqrt(i);
    
    
  }
  for (p=0;p<100;p++)
  {
    printf("%.1f\t%.3f\n",x[p][0],x[p][1]);
  }
  
}
