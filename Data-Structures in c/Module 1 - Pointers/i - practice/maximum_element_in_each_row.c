#include<stdio.h>
#include<stdlib.h>

int main(void){
    int r, c;
    printf("Enter the number of rows in the matrix\n");
    scanf("%d", &r);
    printf("Enter the number of columns in the matrix\n");
    scanf("%d", &c);
    int *arr = (int *)malloc(r * c * sizeof(int));
    int i, j;
    printf("Enter the elements in the matrix\n");
    for (i = 0; i <  r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", (arr + i*c + j));
        }
    }

    for (i = 0; i <  r; i++){
        int max = 0;
        for (j = 0; j < c; j++){
            if(*(arr + i*c + j) > max){
                max = *(arr + i*c + j);
            }
        }
        printf("%d\n", max);
    }

}
