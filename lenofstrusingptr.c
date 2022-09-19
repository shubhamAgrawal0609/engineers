#include<stdio.h>
int main()
{
    char *str,l=0,j;
    printf("enter string ");
    gets(str);

    while(*str!='\0')
    {
        l++;
        str++;
    }
    printf("%d\n",l);
}
