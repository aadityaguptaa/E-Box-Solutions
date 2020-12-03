#include <stdio.h>
#include <stdlib.h>

 struct stack
{
int * a;
int top;
int maxSize;
};
void initstack(struct stack * p, int maxSize);
void push(struct stack * p, int item);
int pop(struct stack * p);
int isEmpty(struct stack* p);
void calculateSpan(int *price, int n, int *span);
void printSpan(int *span, int n);


int main()
{
    int *price,n,i,*span;
    printf("Enter the number of days\n");
    scanf("%d",&n);
    price = (int*)malloc(sizeof(int)*n);
    printf("Enter the stock prices\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",price+i);
    }
    span = (int*)malloc(sizeof(int)*n);
    calculateSpan(price, n, span);
    printf("Span values\n");
    printSpan(span, n);
    return 0;
}


void initstack(struct stack * p, int maxSize) {
	//Fill in the code here
	p->maxSize=maxSize;
	p->a=(int*)malloc(maxSize*sizeof(struct stack));
	p->top=-1;

}

void push(struct stack *p, int item)
{
  	//Fill in the code here
  	if(p->top==(p->maxSize-1)){
  	    return;
  	}
  	p->a[++(p->top)]=item;

}

int isEmpty(struct stack* p)
{
   //Fill in the code here
  return (p->top==-1);
}

int pop(struct stack* p)
{
   //Fill in the code here
   if(p->top==-1){
       return -1000;
   }
   return p->a[p->top--];
  //return 0;
}
int peep(struct stack*p)
{
    if(p->top==-1){
        return -1000;
    }
    return p->a[p->top];
}
void calculateSpan(int *price, int n, int *span)
{
   //Fill in the code here
   span[0]=1;
   struct stack s;
   initstack(&s,n);
   push(&s,0);
   int i;
   for(i=0;i<n;i++){
       while(! isEmpty(&s) && price[peep(&s)]<=price[i]){
           pop(&s);
       }
       span[i]=isEmpty(&s)? i+1 :(i-peep(&s));
       push(&s,i);
   }
}


void printSpan(int *span, int n)
{
    int i;
    for (i = 0; i < n; i++)
      printf("%d ",*(span+i));
}
