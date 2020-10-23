#include <stdio.h>

struct student
{
    int age;
    char name[50];
};

void display(struct student s);

int main(void){

    struct student s1;
    s1.age = 0;
    printf("Enter name:\n");
    scanf("%[^\n]%*c", s1.name);
    while(1){
        printf("Enter age:\n");
        scanf("%d", &s1.age);
        if(s1.age > 0){
            break;
        }else{
            printf("Input Valid Age\n");
        }
    }
    display(s1);

}

void display(struct student s){
    printf("Displaying information\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.age);
}
