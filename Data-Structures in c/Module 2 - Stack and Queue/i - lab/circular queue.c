#include <stdio.h>
#define N 5

char arr[N][10];
int front=-1;
int rear=-1;
void push()
{
    if((rear+1)%N==(front))
    {
        printf("Queue is full\n");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear=(rear+1)%N;
    printf("Enter the string to be inserted = \n");
    scanf("%s",arr[rear]);
    
} 
void pop()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        printf("The deleted element is %s\n",arr[front]);
        front = -1;rear = -1;   
    }
    else
    {
        printf("The deleted element is %s\n",arr[front]);
        front=(front+1)%N;
    }
}
void display()
{
    if(front==-1)
    {
        printf("The contents of the queue are {}\n");
        return;
    }

    printf("The contents of the queue are \n");
    for(int i=front;i<=rear;i++)
    printf("%s ",arr[i]);
    printf("\n");
}

int main()
{

    int choice = 0;
    
    
    while(choice!=(-1))
    {
        printf("Choice 1 : Enter element into Queue\n");
        printf("Choice 2 : Delete element from Queue\n");
        printf("Choice 3 : Display\n");
        printf("Any other choice : Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            
            push();

        }
        else if(choice==2)
        {
            pop();
        }
        else if(choice==3)
        {
            display();
        } 
        else
        {
            choice = -1;
        }
    }
}