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

count_of_node(Head);
}
void count_of_node(struct node *Head){
    int count =0;
    if(Head == NULL){
        printf("\n Linked list is empty");
    }
    struct node* ptr= NULL;
    ptr = Head;
    while(ptr != NULL){
        count ++;
        ptr = ptr->link;
    }
    printf("%d",count);
}