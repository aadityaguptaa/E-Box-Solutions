#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
struct postfix{
    int stack[50];
    int top,nn;
    char *s;
};
void initpostfix(struct postfix *stack){
    stack->top=-1;
};
void setexpr(struct postfix *stack, char *exp){
    stack->s=(char*)malloc(50*sizeof(char));
    strcpy(stack->s,exp);
};
void push(struct postfix *p, int element){
    p->top++;
    p->stack[p->top]=element;
};
int pop(struct postfix *p){
    //int element;
    int element=p->stack[p->top];
    p->top--;
    return element;
};
void calculate(struct postfix *stack){

    while(*(stack->s)){
        if (*(stack->s)-'0'>=0 && *(stack->s)-'0'<=9){
            push(stack,*(stack->s)-'0');
        }
        else{
            int var1=pop(stack);
            int var2=pop(stack);
            switch(*(stack->s)){
                case '+':push(stack,var1+var2);
                         break;
                case '-':push(stack,var1-var2);
                         break;
                case '/':push(stack,var2/var1);
                         break;
                case '*':push(stack,var1*var2);
                         break;

            }
        }
        (stack->s)++;
    }
};
void show(struct postfix stack){
    printf("Result is: %d",pop(&stack));
};
int main(){
    char str[50];
    printf("Enter postfix expression to be evaluated:\n");
    scanf("%s",str);
    struct postfix stack;
    initpostfix(&stack);
    setexpr(&stack,str);
    calculate(&stack);
    show(stack);
    return 0;


}
