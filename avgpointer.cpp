#include<stdio.h>
int  main()
{
int  a[20], n, i, sum=0 ;
float  mean ;
int  *ptr ;
printf("******************please enter the  number you want to enter:**********************\n ") ;
scanf("%d",&n) ;
printf("\n***************Enter the number :************************ \n") ;

for (i = 0; i < n ; i++ )
{
scanf("%d",& a[i]) ;
}
ptr = &a[0] ;
printf(" \n Element in array are :\n ") ;
for (i = 0; i < n ; i++  )
{
printf("\t %d ",( *ptr )) ;
sum = sum + *ptr ;
ptr++ ;
}
mean = sum / n ;
printf("\n Mean of %d Numbers are : %f ",n, mean) ;
return (0);
}
















