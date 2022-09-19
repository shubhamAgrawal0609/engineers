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
    {
	 	for(j=0;j<3;j++)
        		printf("%4d |",a[i][j]);
        printf("\n");  
    }
    for(i=2;i<4;i++)
    {
        for(j=1;j<i;j++)
        { 
			if(a[i][j]==0){
        		printf("the matrice is upper triangukar\n");
				break;}
        	else
				{
				printf(" not triangular \n");
						break;}
	}
}  
	for(i=1;i<4;i++)
    {
        for(j=2;j<5-i;j++)
		{
        	if(a[i][j]==0){
        		printf("the matrice is lower triangular\n");
        		break;
        }
        	else
        		{printf(" not triangular \n");
						break;}	
		}
	} 
	return 0;
}
    
