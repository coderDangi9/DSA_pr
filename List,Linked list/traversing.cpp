#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
int main(){
    count_of_node(head);
    print_data(head);
    return 0;
}
void count_of_node(struct node *head){
    int count =0;
    if(head == NULL){
        printf("\n Linked list is empty");
    }
    struct node* ptr= NULL;
    ptr = head;
    while(ptr != NULL){
        count ++;
        ptr = ptr->link;
    }
    printf("%d",count);
}
void print_data(struct node *head){
    if(head=NULL){
        printf("Link list is empty");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr !=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
}