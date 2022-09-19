#include <stdio.h>
int main()
{ int a,b,add,sub,mul,div;
   int choice;
 printf("enter the value of a and b\n");
 scanf("%d",&a);
 scanf("%d",&b);
 printf("please enter 1 to add 2 for sub 3 for mul and 4 for div\n");
	scanf("%d",&choice);
switch(choice){
	case 1:
		 add=a+b;
		printf("%d",add);
		break;
	 case 2:
		sub=a-b;
		printf("%d",sub);
		break;
	  case 3:
		mul=a*b;
		printf("%d",mul);
		break;
	 case 4:
		div=a/b;
		printf("%d",div);
		break;
	default:
		printf("wrong choice");
	return 0;}
}
