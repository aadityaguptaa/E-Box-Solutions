#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void delafter ( struct node *, int ) ;

int main() {
	struct node *p ;
	p=NULL;
	int n,l;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	do {
		printf("Enter the position after which you want to delete another node\n");
		scanf("%d",&l);
		delafter(p,l);
		printf("The elements in the linked list are");
		display(p);
		printf("\n");
		printf("Do you want to delete another node after a certain position? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	return 0;
}

void append ( struct node **q, int num ) {
	if(*q == NULL){
	    *q = (struct node *)malloc(sizeof(struct node));
	    (**q).data = num;
	}else{
	    struct node *temp;
	    temp = *q;
	    while((*temp).link != NULL){
	        temp = (*temp).link;
	    }
	    (*temp).link = (struct node *)malloc(sizeof(struct node));
	    temp = (*temp).link;
	    (*temp).data = num;
	}
}

void display ( struct node *q ) {
	struct node *temp;
	temp = q;
	while(temp != NULL){
	    printf(" %d", (*temp).data);
	    temp = (*temp).link;
	}
}

void delafter ( struct node *q, int loc ) {
	struct node *before;
	struct node *temp;
	struct node *after;
	temp = q;
	int x = 0;
	while(x != loc){
	    if(temp == NULL){
	        printf("Invalid position\n");
	        return;
	    }
	    before = temp;
	    temp = (*temp).link;
	    x++;
	}
	after = (*temp).link;
	(*before).link = after;
}
