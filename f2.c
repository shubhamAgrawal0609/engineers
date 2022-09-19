#include<stdio.h>
#include <math.h>
int input(int a);
int isPrime(int a);
int isFib(int a);
int disp(int a);

int a;
int main()
{
  int a;
  printf("Enter the value to check : ");
  scanf("%d",&a);
  
}


int isPrime(int a)
{
  int i,c=0;
  for (i=2;i<a;i++)
    {
      if (a%i==0)
      {
      c++;
    }
  }
  if (c==0)
  return 1;
  else 
  return 0;
}

int isFib(int a)
{
  int n1=0,n2=1,n3=0;
  while (n1<a)
  {
    n3=n1+n2;
    n1=n2;
    n2=n3;  
  }
  if (n1==a)
  return 1;
  else
  return 0;
}

int disp(int a)
{
  if (isPrime(a)!=0)
  printf("Prime number\n");
  else 
  printf("Not Prime number\n");
  
  if (isFib(a)!=0)
  printf("Fibonacci number");
  else
  printf("Not a fibonacci number");
}
