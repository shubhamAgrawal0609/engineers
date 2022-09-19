#include <stdio.h>
#include <string.h>
void charRemove(char *, char);
int main()
{	char str[80];
    char remove;
    printf("************Enter any string************** ");
    gets(str);
    printf("to  removed character from string enter ");
    remove = getchar();
    charRemove(str, remove);
    printf("String after removing '%c': %s", remove, str);
    return 0;
}
void charRemove(char * str, char remove)
{
    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == remove)
        {
            for(j=i; j<len; j++)
            str[j] = str[j+1];
            len--;
        }
    }
}   
