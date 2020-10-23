#include <stdio.h>

struct student{
    char name[50];
    int roll_number;
    float marks;
};

int main(void){

    printf("Enter information of student:\n");

    struct student s;
    printf("Enter the USN\n");
    scanf("%d", &s.roll_number);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Displaying Information:\n");
    printf("Roll number: %d\n", s.roll_number);
    printf("Name: %s\n", s.name);
    printf("Marks: %.1f\n", s.marks);

}
