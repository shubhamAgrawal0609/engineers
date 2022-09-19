#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c, D,R1,R2,real,img;
	printf("enter the value of a b and c\n");
	scanf("%lf %lf %lf", &a,&b,&c);
	D =b*b-4*a*c;
	if (D>0){
		printf("roots are real");
	}
	else{
		real=-b/(2*a);
		img= sqrt(-D)/(2*a);
		printf("R1=%f+%fi and R2=%f-%fi",real,img,real,img);
		
		
	}
	return 0;
}
