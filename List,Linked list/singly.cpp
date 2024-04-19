#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
int main(){
    struct node* Head = (struct node *)malloc(sizeof(struct node));
    Head->data=45;
    Head->link=NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data=34;
    current->link=NULL;
    Head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data=9;
    current->link=NULL;

    Head->link->link = current;

    printf("%d",Head->data);
    return 0;


}