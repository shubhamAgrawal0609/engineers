#include<stdio.h>
void pattern(int n);
int main(){
	int n;
	int i=1,k=1;
	scanf("%d",&n);
	pattern (n);
	return 0;
}
 void pattern ( int n){
 
for(int i;i<n;i++)
    {for (int k=1;k<i;k++){
		printf("*");}
	printf("\n");
	
}
}


