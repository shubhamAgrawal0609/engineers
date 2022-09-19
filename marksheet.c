#include <stdio.h>
 struct student { 
 char firstName[50];
  int roll;
  float marks;}
   s[6];
    int main() 
	{ int i;
	 printf("Enter information of students:\n");
	  for (i = 0; i < 2; ++i) { 
	  s[i].roll = i + 1;
	   printf("\nFor roll number%d,\n", s[i].roll);
	    printf("Enter first name: "); 
		scanf("%s", s[i].firstName);
		 printf("Enter marks: ");
		  scanf("%f", &s[i].marks); } 
		  printf("Displaying Information:\n\n"); 
		  printf("roll no   marks                                      name   ");
		 for (i = 0; i < 2; i++) 
		 { printf(" %d        %f                                        ",i + 1, s[i].marks, puts(s[i].firstName)); }
//		  printf("First name: "); puts(s[i].firstName); 
//		  printf("Marks: %.1f", s[i].marks);
		   printf("\n");  
	return 0;}
