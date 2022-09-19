#include <stdio.h>
int bsort(int list[],int n)
{
	int i,j,c;
    for (i=0;i<(n-1);i++)
    {
    for (j=0;j<n-i-1;j++)
    {
        if (list[j]>list[j+1])
        { 
            c= list[j];
            list[j]=list[j+1];
            list[j+1]=c;
        }
    }
}
}
int main()
{
	int n,i,*ptr;
	printf("********Enter the size of the array********* ");
	scanf("%d", &n);
	int arr[n];
	printf("\n**********Enter the array elements**********");
    ptr=&arr[0];
	for (i=0;i<n;i++)
	{
		scanf("%d",ptr);
        ptr++;
	}
	printf("\nUnsorted Array:");
    ptr=&arr[0];
	for (i=0;i<n;i++)
	{
		printf("%d",*ptr);
        ptr++;
	}
	bsort(arr,n);
    ptr=&arr[0];
	printf("\nSorted Array:");
	for (i=0;i<n;i++)
	{
		printf("%d",*ptr);
        ptr++;
	}
	return 0;
}
