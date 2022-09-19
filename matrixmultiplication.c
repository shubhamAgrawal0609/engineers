#include <stdio.h>
int main(){
	int r,c,p[r][c];
	int i,j;
	printf("					multiplication table \n\n");
	printf(" ");
	for (j=1;j<=c;j++){
		printf("%4d",j);
		printf("\n");
		printf("--------------------------------------------------\n");
		for(i=0;i<=r;i++){
			r=i+1;
			printf("%2d |",r);
				for(j=1;j<=c;j++){
					c=j;
					p[i][j]=r*c;
					printf("%4d",p[i][j]);	
			}
			printf("\n");}
		}
	return 0;
}
