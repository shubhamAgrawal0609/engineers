#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char b[50],s[50];
	int i;
	printf("enter ur text\n");
	gets(s);
	for(i=0;i<51;i++);{
		if (s[i]>s[i+1]){
			strcat(b,s[i+1]);
		     
		}
		else{ 
			strcat(b,s[i]);
		}
	}
	printf("%s",b);
	return 0;
}
