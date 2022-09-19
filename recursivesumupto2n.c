#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("******* value of n enter please****** ");
    scanf("%d", &n);    
    printf("sum of %d even numbers is %d", n, 2*sum(n));
    return 0;
}
int sum(int n) 
{
    if(n == 1)      
        return 1;
    else 
        return (n+sum(n-1)); 
}
