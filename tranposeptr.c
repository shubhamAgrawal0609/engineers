#include<stdio.h>
int main()
{
	int row,column,i,j;
	printf("**********Enter lenght of the matrix********\n");
	printf("No. of Rows : ");
	scanf("%d",&row);
	printf("N0. of Columns : ");
	scanf("%d",&column);
	int a[row][column];int t[column][row];
    int *ptr1,*ptr2;
	printf("Enter the values of the matrix.");
    ptr1=&a[0][0];
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			scanf("%d",ptr1);
            ptr1++;
		}
		printf("\n");
	}
	for (i=0;i<row;i++)
	{
		for (j=0;j<column;j++)
		{
			t[j][i]=a[i][j];
		}
	}
		printf("%c",218);
		for (i=0;i<row;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",191);
		ptr2=&t[0][0];
		for (i=0;i<column;i++)
		{
			printf("%c\t",179);
			for (j=0;j<row;j++)
			{
				printf("%d\t",*ptr2);
                ptr2++;
			}
			printf("%c",179);
			printf("\n");
		}
		printf("%c",192);
		for (i=0;i<row;i++)
		{
			printf("\t");
		}
		printf("\t%c\n",217);
}
