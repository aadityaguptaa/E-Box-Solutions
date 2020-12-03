#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int MAX=50;
struct postfix
{
       int stack[50];
        int top,nn;
      char *s;
};
    void initpostfix(struct postfix *);
     void setexpr(struct postfix *, char *str);
     void push(struct postfix *, int item);
     int pop(struct postfix *);
     void calculate(struct postfix *);
     void show(struct postfix );

int main()
{
   char expr[50];
  printf("Enter postfix expression to be evaluated:\n");
  scanf("%s",expr);
   struct postfix p;
  initpostfix(&p);
  setexpr(&p,expr);
  calculate(&p);
  show(p);
  return 0;
}
void initpostfix(struct postfix *p)
  {
    //fill in the code here
    p->top = -1;
  }
void setexpr(struct postfix *p, char *str)
{
    for(int i = 0; i < strlen(str); i++){
        if(isdigit(str[i])){
            push(p, str[i] - '0');
        }else{
            int val1 = pop(p);
            int val2 = pop(p);
            switch(str[i]){
                case '+': push(p, val1 + val2);
                break;
                case '-': push(p, val1 - val2);
                break;
                case '*': push(p, val1 * val2);
                break;
                case '/': push(p, val1 / val2);
                break;
            }
        }
    }
}
void push(struct postfix *p, int item)
{
    if(p->top >= 49){
        printf("stack is full\n");
    }else{
        p->top++;
        p->stack[p->top] = item;
    }
        //fill in the code here
}
int pop(struct postfix *p)
{
    if(p->top <= -1){
        printf("Stack is empty\n");
        
    }else{
        int y = p->stack[p->top];
        p->top--;
        return y;
    }
    return 1000;
     //fill in the code here
  
}
void calculate(struct postfix *p)
{
    
    //fill in the code here
}
void show(struct postfix p)
{
    printf("Result is: %d", p.stack[p.top]);
     //fill in the code here
}