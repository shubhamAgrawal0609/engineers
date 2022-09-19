#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{   char *a[20];
    int i,n=0;
    void sort(int n,char *a[]);
    printf("**********Enter number of String **********");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {	printf("Enter the Strings %d : =\n",i+1);
        a[i]=(char *)malloc(20*sizeof(char));
        scanf("%s",a[i]);
    }
    sort(n,a);
    printf("sorted list is :\n");
    for(i=0;i<n;i++)
    {	printf("%d %s\n",i+1,a[i]);
    }                    
}
void sort(int n,char *a[])
{	int i,j;
    char b[20];
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
    {
    if(strcmp(a[i],a[j])>0)
    {
        strcpy(b,a[j]);
        strcpy(a[j],a[i]);
        strcpy(a[i],b);
    }
    }
    }
    return;
}
