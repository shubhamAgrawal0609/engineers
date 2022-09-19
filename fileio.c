#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n,s1,s2;
	printf("************Enter number of students**********************\n ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("C:\\student.txt","a"));

	
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks in 2 subject: ");
		scanf("%d %d",&s1,&s2);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}

	fclose(fptr);
	fptr=(fopen("C:\\student.txt","a"));
	printf("\nname \t\t sub1 \t\t sub2 \t\t total\n");
	for (i=0;i<n;++i) {
		fscanf(fptr,"%s %d %d",name,&s1,&s2);
		
		
		fprintf("%s \t\t %d \t\t %d \t\t &d",name,s1,s2,s1+s2);}
		fclose(fptr);

	return 0;

}
