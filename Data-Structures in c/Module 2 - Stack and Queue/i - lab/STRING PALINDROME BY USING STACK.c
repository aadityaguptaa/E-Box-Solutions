#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    char arr[100];
    int top;
};
void push(struct stack *st, char c);
char pop(struct stack *st);

int main(void){
    char input[100];
    struct stack *st;
    st = (struct stack *)malloc(sizeof(struct stack));
    st -> top = -1;
    printf("Enter string to check it is palindrome or not :\n");
    scanf("%s", input);
    int len = strlen(input);
    int i;
    for(i = 0; i < len/2; i++){
        push(st, input[i]);
    }
    if(len %2 != 0){
        i+=1;
    }
    for(int j = i; j < len; j++){
        char y = pop(st);
        if(y == input[j]){
            continue;
        }else{
            printf("%s is not a Palindrome string", input);
            return 0;
        }
    }
    printf("%s is a Palindrome string", input);
}

void push(struct stack *st, char c){
    if(st->top >= 99){
        printf("Stack is full");
    }else{
        st->top++;
        st->arr[st->top] = c;
    }
}

char pop(struct stack *st){
    if(st->top <= -1){
        printf("stack is empty");
        return 'z';
    }else{
        char y = st->arr[st->top];
        st->top--;
        return y;
    }
}
