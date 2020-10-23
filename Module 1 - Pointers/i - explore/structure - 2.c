#include <stdio.h>

struct student{
    char name[50];
    int roll_number;
    float marks;
};

int main(void){

    int n;
    printf("Enter the Number of students\n");
    scanf("%d", &n);
    struct student students[n];
    printf("Enter information of students:\n");
    for(int i = 1; i <= n; i++){

        struct student s;
        printf("Enter the Roll Number\n");
        scanf("%d", &s.roll_number);
        printf("For roll number%d,\n", s.roll_number);
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter marks: \n");
        scanf("%f", &s.marks);
        students[i-1] = s;
    }

    printf("Displaying Information:\n");
    for(int i = 1; i <=n; i++){
        printf("Roll number: %d\n", students[i-1].roll_number);
        printf("Name: %s\n", students[i-1].name);
        printf("Marks: %.1f\n", students[i-1].marks);
        printf("\n");
    }

}
