#include <stdio.h>
int sumcal(n){
	int sum=0;
	for(int i=0;i<2*n;i=i+2){
		sum=sum+i;
		return sum;
		
	}
}




int main(){
	int n,i;
	printf("******enter the value of n********\n");
	scanf("%d",&n);
	sumcal(n);
	return 0;
	
	
}

