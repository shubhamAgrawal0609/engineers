#include<stdio.h>  
#include<stdbool.h>  
  
bool leap(int); 
  
int main()  
{  
    int year;  
  
    printf("Enter a year to find \n");  
    scanf("%d", &year);  
   
    if( leap(year) )  
    {  
        printf("%d leap year\n", year);  
    }  
    else  
    {  
        printf("%d is not leap year\n", year);  
    }  
  
    return 0;  
}  #include<stdio.h>

bool leap(int year)  
{  
    if(year % 100 == 0)  
    {  
        if(year % 400 == 0)  
            return true;  
        else  
            return false;  
    }  
    else  
    {  
        if(year % 4 == 0)  
            return true;  
        else  
            return false;  
    }  
}
