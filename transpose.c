#include <stdio.h>
int main(){
	printf("enter the value of matrices\n");
	int a[3][3],i,j;
	 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        	scanf("%d",&a[i][j]);
        }
    }
   printf("the value of entered matrices\n");
    for(i=0;i<3;i++)
    { 	for(j=0;j<3;j++)
        		printf("%4d |",a[i][j]);
        printf("\n");  
    }
    printf("the tranposed matrice\n");
    for(i=0;i<3;i++)
    { 	for(j=0;j<3;j++)
        		printf("%4d |",a[j][i]);
        printf("\n");  
    }
	return a[j][i];
	
   return 0;
}
