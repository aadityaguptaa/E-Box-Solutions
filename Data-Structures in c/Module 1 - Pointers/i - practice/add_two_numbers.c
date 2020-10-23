#include<stdio.h>

void addition(int *a, int *b);

int main(void){
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    addition(&a, &b);
}

void addition(int *a, int *b){
    printf("Sum of two elements = %d", *a + *b);
}
