#include<stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,k;
	printf("***the size of the first matrix\n");
	printf("Enter no of rows : ");
	scanf("%d",&r1);
	printf("Enter no of columns : ");
	scanf("%d",&c1);
	printf("***the size of the second matrix\n");
	printf("Enter no of rows : ");
	scanf("%d",&r2);
	printf("Enter no of columns : ");
	scanf("%d",&c2);
	if (c1==r2)
	{	int a[r1][c1], b[r2][c2], c[1][c2],*ptr1,*ptr2,*ptr3;
        ptr1=&a[0][0];
		printf("Enter the values of first matrix: ");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				scanf("%d",ptr1);
                ptr1++;
			}
			printf("\n");
		}
		ptr2=&b[0][0];
		printf("Enter the values of second matrix: ");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf("%d",ptr2);
                ptr2++;
			}
			printf("\n");
		}
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				c[i][j]=0;
				for (k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		
		printf("%c",218);
		for (i=0;i<c2;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",191);
		
        ptr3=&c[0][0];
		for (i=0;i<r1;i++)
		{
			printf("%c\t",179);
			for (j=0;j<c2;j++)
			{
				printf("%d\t",*ptr3);
                ptr3++;
			}
			printf("%c",179);
			printf("\n");
		}
		printf("%c",192);
		for (i=0;i<c2;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",217);
	}
	else
	printf("The matrices can't be multiplied.");
}
