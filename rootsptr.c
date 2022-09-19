#include <stdio.h>
#include <math.h>
void solve(int*,float*);
int main()
{
int a[3];
float *root;
clrscr();
printf(“Enter the value of A : “);
scanf(“%d”,&a[0]);
printf(“Enter the value of B : “);
scanf(“%d”,&a[1]);
printf(“Enter the value of C : “);
scanf(“%d”,&a[2]);
solve(a,root);
if(root==NULL)
printf(“The root is not possible\n”);
else if(root[0]==root[1])
printf(“The root is %.2f\n”,root[0]);
else
printf(“The roots are %.2f & %.2f\n”,root[0],root[1]);
getch();
return 0;
}
void solve(int *a,float *r)
{
float d;
d=a[1]*a[1]-4*a[0]*a[2];
if(d<0)
{
r=NULL;
}
else if(d==0)
{
r[0]=r[1]=-a[1]/(2*a[0]);
}
else
{
r[0]=-a[1]/(2*a[0]);
r[1]=-a[1]/(2*a[0]);
}
}
