#include<stdio.h>
#include<stdlib.h>

int maximum(int *a, int *b, int *c){
    if(*a > *b && *a > *c){
        return *a;
    }else if(*b > *a && *b > *c){
        return *b;
    }else{
        return *c;
    }
}

int main(void){
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("Maximum element is %d", maximum(&a, &b, &c));
    return 0;
}
