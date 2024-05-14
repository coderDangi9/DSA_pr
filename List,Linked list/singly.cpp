#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
int main(){
    struct node* head = (struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data=34;
    current->link=NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data=9;
    current->link=NULL;

    head->link->link = current;

    printf("%d",head->data);
count_of_node(head);
print_data(head);
add_at_end(head, 87);
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
    struct node *ptr;
    ptr=head;
    while(ptr !=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
}

void add_at_end(struct node*head, int data){
    struct node *ptr , *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp ->data;
    temp->link = Null;

    while(ptr->link !=Null){
        ptr = ptr->link;
    }
    ptr->link=temp;
    
}

struct node* del_first(struct node* head){
    if(head==NULL){
        printf("list is already empty");
    }
    else{
        struct node *temp=head;
        head= head->link;
        free(temp);
    }
    return head;
}