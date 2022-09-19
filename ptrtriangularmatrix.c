#include<stdio.h>
int main()
{
  int row, column, Upppertriangular, count=0,lowertriangular;
  printf("Enter the size of the matrix.\n");
  printf("Enter no of rows : ");
  scanf("%d",&row);
  printf("Enter no of columns : ");
  scanf("%d",&column);
  int a[10][10];
  int i,j,*ptr;
  printf("Enter the values of the matrix.");
  ptr=&a[0][0];
  for (i=0;i<row;i++)
  {
    for (j=0;j<column;j++)
    {
      scanf("%d",ptr);
      ptr++;
    }
    printf("\n");
  }
    printf("%c",218);
    for (i=0;i<column;i++)
    {
      printf("\t");
    }
    printf("\t%c\n",191);
    
    ptr=&a[0][0];
    for (i=0;i<row;i++)
    {
      printf("%c\t",179);
      for (j=0;j<column;j++)
      {
        printf("%d\t",*ptr);
        ptr++;
      }
      printf("%c",179);
      printf("\n");
    }
    printf("%c",192);
    for (i=0;i<column;i++)
    {
      printf("\t");
    }
    printf("\t%c\n",217);
    
    

  for (i=0;i<row;i++)
  {  
    for (j=0;j<i;j++)
    {
      if (a[i][j]!=0)
      {
        count=1;
      }
    }
    
  }
  if (count==1)
  Upppertriangular=1;
  else
  Upppertriangular=0;  
  

  count=0;
  for (i=0;i<row;i++)
  {  
    
    for (j=i+1;j<column;j++)
    {
      if (a[i][j]!=0)
      {
        count=1;
      }
    }
    
  }
  if (count==1)
  lowertriangular=1;
  else
  lowertriangular=0;  
    
  if (Upppertriangular==0 || lowertriangular==0)
  printf("Matrix is not Triangular.");
  else 
  printf("Matrix is Triangular.");  
    
}
