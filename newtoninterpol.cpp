#include<iostream>
#include<iomanip>
using namespace std;

#define MAXN 100
#define ORDER 4

int main()
{
float ax[MAXN+1],ay[MAXN+1],diff[MAXN+1][ORDER+1];
float nr=1.0,dr=1.0,x,p,h,yp;
int n,i,j,k;

cout<<"Enter the value of n"<<endl;
cin>>n;

cout<<"Enter the value of x,y"<<endl;
for(i=0;i<=n;i++)
cin>>ax[i]>>ay[i];

cout<<"Enter the value of x";
cout<<"for which value of y is wanted"<<endl;
cin>>x;
cout<<fixed;

h=ax[1]-ax[0];

//Making diff. table calculating the 1st order differences

for(i=0;i<=n-1;i++)
diff[i][1]=ay[i+1]-ay[i];

for(j=2;j<=ORDER;j++)
for(i=0;i<=n-j;i++)
diff[i][j]=diff[i+1][j-1]-diff[i][j-1];

while (!(ax[i]>x))
i++;

i--;
p=(x-ax[i])/h;
yp=ay[i];

for(k=1;k<=ORDER;k++)
{
nr += p-k+1;
dr *= k;
yp += (nr/dr)*diff[i][k];
}

cout<<"When x="<<setw(6)<<setprecision(1)<<x;
cout<<" y="<<setw(6)<<setprecision(2)<<yp<<endl;

return 0;
}