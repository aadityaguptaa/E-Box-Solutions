#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n; printf("Enter value of n\n");
    scanf("%d", &n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter n array elements\n");
    for(int i = 0; i < n; i++){
        scanf("%d", arr + i);

    }
    printf("Original Array = ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
    printf("Reverse Array = ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr+n-i-1));
    }
    printf("\n");
}
