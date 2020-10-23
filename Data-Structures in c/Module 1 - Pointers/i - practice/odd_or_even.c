#include<stdio.h>
#include<stdlib.h>
void oddoreven(int *a)
{
    int p;
    p = *a;
    if(p%2 == 0){
        printf("%d is an even number", *a);
    }else{
        printf("%d is an odd number", *a);
    }
}
int main(void){
    int *n;
    n = (int*)malloc(1 * sizeof(int));
    printf("Enter the number");
    scanf("%d", n);
    oddoreven(n);
    return 0;
}
