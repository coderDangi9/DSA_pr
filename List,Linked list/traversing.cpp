#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
int main(){
    count_of_node(head);
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