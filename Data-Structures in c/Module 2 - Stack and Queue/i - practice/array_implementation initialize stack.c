#include<stdio.h>
#include<stdlib.h>

struct stack{
    int a[5];
    int top;
};

void initstack (struct stack *p);

void initstack(struct stack *p){
    p->top = -1;
}



int main(void){

    struct stack *st;
    st = (struct stack *)malloc(1 * sizeof(struct stack));
    initstack(st);
    printf("The top of the stack is %d", st->top);
    return 0;
}
