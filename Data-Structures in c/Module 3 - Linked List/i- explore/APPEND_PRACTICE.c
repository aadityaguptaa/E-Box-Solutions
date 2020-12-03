#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
	struct node * link;
};

void append ( struct node **, int ) ;
void display ( struct node * ) ;


int main() {
	struct node *p ;
	p=NULL;
	int n;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	}
	while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are ");
	display(p);
	printf("\n");
	return 0;
}


void append ( struct node **q, int num )
{
    if(*q == NULL){
        *q = (struct node *)malloc(sizeof(struct node));
        (**q).data = num;
        return;
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

void display ( struct node *q )
{
    while(q != NULL){
        printf("%d ", (*q).data);
        q = (*q).link;
    }
	//Fill in the code here
}