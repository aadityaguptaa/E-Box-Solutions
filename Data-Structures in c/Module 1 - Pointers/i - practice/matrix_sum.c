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
    int sum = 0;

    for (i = 0; i <  r; i++){
        for (j = 0; j < c; j++){

            sum += *(arr + i*c + j);

        }

    }
    printf("The sum of the elements in the matrix is %d", sum);

}
