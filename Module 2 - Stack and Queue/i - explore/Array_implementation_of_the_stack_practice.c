#include<stdio.h>
int stack[4],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    //clrscr();
    top=-1;
    n = 4;
    do
    {
        printf("Choice 1 : Push\nChoice 2 : Pop\nChoice 3 : Display\nAny other choice : Exit\n");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                return 0;
                break;
            }
            default:
            {
                return 0;
            }

        }
    }
    while(1);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");

    }
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe contents of the stack are ");
        for(i=top; i>=0; i--)
            printf("%d ",stack[i]);
        printf("\n");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}
