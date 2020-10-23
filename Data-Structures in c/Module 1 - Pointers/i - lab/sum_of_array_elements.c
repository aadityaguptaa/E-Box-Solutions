#include<stdio.h>
#include<stdlib.h>

int main(void){
    int r, c;
    printf("Enter number of rows\n");
    scanf("%d", &r);
    printf("Enter number of columns\n");
    scanf("%d", &c);
    int *ptr;
    ptr = (int *)malloc((r*c)*sizeof(int));
    printf("Enter array elements\n");
    int sum = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", ptr+i*c + j);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum += *(ptr + i*c + j);
        }
    }

    printf("Sum of the elements of the array=%d", sum);
    return 0;
}
