#include<stdio.h>
int main()
{
    int i,j,k,s1=0,s2=0,a[3][3],x,y;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        	scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    { 	for(j=0;j<3;j++)
        		printf("%d |",a[i][j]);
        printf("\n");  
    }
printf("\n");
  printf("enter row and column  whose sum u want ");
    scanf("%d %d",&x,&y);
	for(k=0;k<3;k++)
    { 	s1=s1+a[x][k];
    	s2=s2+a[k][y];
    	printf("sum %d=",s1);
    	printf("sum %d=",s2);
    	
	}
	return 0;}
