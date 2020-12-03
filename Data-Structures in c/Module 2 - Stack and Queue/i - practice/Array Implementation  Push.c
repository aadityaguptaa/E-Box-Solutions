#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int a[5];
    int top;
};

void initstack(struct stack *p);
void push(struct stack *p, int item);
void display(struct stack p);

void initstack(struct stack *p){
    p->top = -1;
}

void display(struct stack p){
    if(p.top <= -1){
        printf("{}\n");
    }else{
        for(int i = 0; i < p.top; i++){
            printf("%d ", p.a[i]);
        }
        printf("%d\n", p.a[p.top]);
    }
}

void push(struct stack *p, int item){
    if(p->top >= 4){
        printf("Stack is full\n");
    }else{
        p->top++;
        p->a[p->top] = item;
    }
}



int main(void){
    
    struct stack *st;
    st = (struct stack *)malloc(1 * sizeof(struct stack));
    initstack(st);
    printf("The contents of the stack are ");
    display(*st);
    printf("Enter the element to be pushed\n");
    int s;
    scanf("%d", &s);
    push(st, s);
    printf("The contents of the stack are ");
    display(*st);

    while(1){
        printf("Do you want to push another element into the stack? Type Yes/No\n");
        char in[10];
        scanf("%s", in);
        switch(in[0]){
            case 'Y': printf("Enter the element to be pushed\n");
            int z;
            scanf("%d", &z);
            push(st, z);
            printf("The contents of the stack are ");
            display(*st);
            break;
            case 'N': return 0;
         }
    }
    return 0;
}