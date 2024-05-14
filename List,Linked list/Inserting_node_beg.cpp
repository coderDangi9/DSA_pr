#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
int main(){
    struct node* head =(struct node*)malloc(sizeof(struct node));
    head->data=77;
    head->link=NULL;

    struct node* ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=99;
    ptr->link=NULL;

    head->link=ptr;
    int data=8;
    head= add_at_beg(head, data);
    ptr =head;

    while(ptr !=NULL){
        printf("%d",ptr->data);
        ptr= ptr->link;
    }
    return 0;

}
struct node*  add_at_beg(struct node*head, int d){
    struct node* ptr =(struct node*)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=head;
    head= ptr;
    return head;
}