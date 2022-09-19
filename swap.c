#include <stdio.h>
int main(){
	int a;
	int b;
	int t;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf(" the value of a %d \n",a);
	printf("the value of b %d\n",b);
	return 0;
	
}
