#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
	struct student s;
	struct student *ptr;
	ptr= &s;
	
    
    printf("********************Enter information***************************\n");
    printf("********************DAV Public school***************************\n");
    printf("************Aurangabad (bihar) zone 824101******************\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name),stdin );

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}
