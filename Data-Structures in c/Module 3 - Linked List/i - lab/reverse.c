#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *link;
};
void display(struct node *q);
void append(struct node **q, int num);
void reverse(struct node **q);


int main(void){
    struct node *p;
    p = NULL;
    int n;
    char ch[10];
    do{
        printf("Enter the value\n");
        scanf("%d", &n);
        append(&p, n);
        printf("Do you want to add another node? Type Yes/No\n");
        scanf("%s", ch);
    }while(!strcmp(ch, "Yes"));
    printf("The elements in the linked list are ");
    display(p);
    reverse(&p);
    printf("\nThe elements in the reversed linked list are ");
    display(p);
    return 1;
}

void append(struct node **q, int num){
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

void display(struct node *q){
    struct node *temp;
    temp = q;
    while(temp != NULL){
        printf("%d ", (*temp).data);
        temp = (*temp).link;
    }
}

void reverse(struct node **q){
    struct node* prev = NULL;
    struct node* current = *q;
    struct node* next = NULL;
    while (current != NULL) {
        next = current->link;
 
        current->link = prev;
 
        prev = current;
        current = next;
    }
    *q = prev;
}
