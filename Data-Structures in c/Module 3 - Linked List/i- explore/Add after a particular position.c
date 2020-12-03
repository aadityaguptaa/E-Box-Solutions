#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
	int data;
	struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void addafter ( struct node *, int, int ) ;

int main() {
	struct node *p ;
	p=NULL;
	int n,l;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to append another node? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	do {
		printf("Enter the position after which you want to add another node\n");
		scanf("%d",&l);
		printf("Enter the value\n");
		scanf("%d",&n);
		addafter(p,l,n);
		printf("The elements in the linked list are ");
		display(p);
		printf("\n");
		printf("Do you want to add another node after a certain position? Type Yes/No\n");
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
	    printf("%d ", (*temp).data);
	    temp = (*temp).link;
	}
}

void addafter ( struct node *q, int loc, int num ) {
	struct node *next;
	struct node *temp;
	temp = q;
	int x = 0;
	while(x != loc){
	    if(temp == NULL){
	        printf("There are less than %d elements in the linked list\n", loc);
	        return;
	    }
	    temp = (*temp).link;
	    x++;
	}
	next = (*temp).link;
	(*temp).link = (struct node *)malloc(sizeof(struct node));
	temp = (*temp).link;
	(*temp).data = num;
	(*temp).link = next;
}
