#include <stdio.h>

struct emp
{
    int employeenumber;
    char name[10];
    float salary;
};

int main(void){

    int n;
    printf("Enter the number of employees : \n");
    scanf("%d", &n);
    struct emp emps[n];
    for(int i = 1; i <= n; i++){

        struct emp e;
        printf("Enter the employee number : \n");
        scanf("%d", &e.employeenumber);
        printf("Enter the name : \n");
        scanf("%s", e.name);
        printf("Enter the Salary : \n");
        scanf("%f", &e.salary);
        emps[i-1] = e;
    }

    printf("Display employee details\n");
    printf("Emp. No. Name Salary \n");
    for(int i = 1; i <=n; i++){
        if(emps[i-1].salary > 5000){
        printf("%d %s %.2f\n", emps[i-1].employeenumber, emps[i-1].name, emps[i-1].salary );}
    }

}
