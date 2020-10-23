#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n;
    printf(" Enter the number of elements in an array\n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    printf("Enter the array elements\n");
    int max = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", ptr);
        if(*ptr > max){
            max = *ptr;
        }
        ptr+=1;
    }
    printf("%d is the maximum element in the array", max);

}
