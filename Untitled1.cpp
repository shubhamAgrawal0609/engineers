#include<stdio.h>
int main()
{
    int i,j,b[3][3],a[3][3],c[i][j];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        	scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        	scanf("%d",&b[i][j]);
		}
    }
    for(i=0;i<3;i++)
    { 	for(j=0;j<3;j++)
        		printf("%d |",a[i][j]);
        printf("\n");  
    }
printf("\n");


    for(i=0;i<3;i++)
    {	for(j=0;j<3;j++)
        	printf("%d |",b[i][j]);	
		printf("\n");
        
    }
    for(i=0;i<3;i++)
    {	for(j=0;j<3;j++)
    		printf("%4d",c[i][j]=a[i])
    		
    
