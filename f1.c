#include <stdio.h>
int swap(a, b);
int main(){
	int a;
	int b;
	
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	swap(a,b);
	return 1;
	
}
 int swap(a,b){
	int t;
	t=a;
	a=b;
	b=t;
	printf(" the value of a %d \n",a);
	printf("the value of b %d\n",b);
}
