#include <stdio.h>
int main(){
   int y;
   int  s ,e,i,c=0;
   int choice;
   printf("please type 1 t0 find no. of year in between ");
   scanf("%d",&choice);
   printf("Enter the year to check: ");
   scanf("%d",&y);

   
   if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))
      printf("It is a leap year");
   else
      printf("It is not a leap year");
switch( choice){
  	case 1:

       	printf("enter starting year");
		scanf("%d",&s);
		printf("enter ending year");
		scanf("%d",&e);
   	
			for(i=s;i<=e;i++){
				if(i%4==0){   
					if (i%400==0){c++;
						prinf("%d\n",i); 
			}
		}
				else{ c++; printf("%d\n",i);}
		}
		
	default: 
			printf("no choice choosen");
	}
 printf("no. of years%d",c);
 return 0;	
}
