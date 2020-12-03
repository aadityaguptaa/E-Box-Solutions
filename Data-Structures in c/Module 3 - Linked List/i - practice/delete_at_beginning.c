#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *link;
};
void delete(struct node **q);
void display(struct node *q);
void append(struct node **q, int num);

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
    printf("\nThe elements in the linked list after deleting an element are ");
    delete(&p);
    display(p);
    printf("\nThe elements in the linked list after deleting another element are ");
    delete(&p);
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

void delete(struct node **q){
    *q = (**q).link;
}
    