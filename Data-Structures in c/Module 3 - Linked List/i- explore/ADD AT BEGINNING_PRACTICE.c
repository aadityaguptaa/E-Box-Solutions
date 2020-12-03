#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};

void addatbeg ( struct node **, int ) ;
void display ( struct node * ) ;


int main() {
	struct node *p ;
	p=NULL;
	int n;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		addatbeg(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	}
	while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are ");
	display(p);
	printf("\n");
	return 0;
}


void addatbeg ( struct node **q, int num )
{
    if(*q == NULL){
        *q = (struct node *)malloc(sizeof(struct node));
        (**q).data = num;
        return;
    }else{
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        (*temp).data = num;
        (*temp).link = *q;
        *q = temp;
    }
}

void display ( struct node *q )
{
    struct node *temp;
    temp = q;
	while(temp != NULL){
	    printf("%d ", (*temp).data);
	    temp = (*temp).link;
	}
}