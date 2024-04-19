//Complete menu driven program in c to implement circular linked list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>// for malloc function
#include<process.h>// for exit function
struct Node {
    int info;
    struct Node *next;
};
typedef struct Node NodeType;
NodeType *first;
NodeType *last;
first = null;
last = null;

void insertbeg(int item){
    NodeType *Newnode;
    Newnode =(NodeType*)malloc(sizeof(NodeType));
    Newnode ->info = item;
    if(first == null){
        Newnode -> next= Newnode;
        first = Newnode;
        last = Newnode;
    }
    else{
        Newnode->next=first;
        first=Newnode;
        last->next=Newnode;
    }
}
void insertEnd(int item){
    Newnode=(NodeType*)malloc(sizeof(NodeType));
    Newnode->info=item;
    if(first==null){
        first=Newnode;
        last = Newnode;
        Newnode->next=Newnode;

    }
    else{
        last->next= Newnode;
        last = Newnode;
        Newnode ->next = first;
    }
}
void DeleteFirst(){
    NodeType *temp;
    temp = first;
    if(first==null){
        printf("Empty linked list");

    }
    else if(first == last){
        first = null;
        last = null;
        free(temp);
    }
    else{
        first= first->next;
        last ->next= first;
        free(temp);
    }
}
void DeleteLast(){
    NodeType *temp;
    temp = last;
    if(last==null){
        printf("Empty linked list");

    }
    else if(first == last){
        first = null;
        last = null;
        free(temp);
    }
    else{ while(temp->next != last){
        temp = temp ->next;
    }
        temp->next= first;
        last = temp;
        temp= first;
        free(temp);
    }
}
void Display(){
    NodeType *temp;
    if(first==null){
        printf("Enter linked list");
    }
    else{
        temp= first;
        while(temp != last){
            printf(temp->info);
            temp= temp->next;
        }
        printf(last->info);
    }
}
int main(){
    int choice,item;
    do{
    printf("/n 1.Insert at begining\t 2.Insert at Last\t 3.delete first node\t 4.delete last node\t 5.Display");
    printf("\nEnter your choice\n => ");
    scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter data item to be inserted");
                scanf("%d",&item);
                insertbeg(item);
                break;
            case 2:
                printf("Enter data to be inserted");
                scanf("%d",&item);
                insertEnd(item);
                break;
            case 3:
                DeleteFirst();
                break;
            case 4:
                DeleteLast();
                break;
            case 5:
                Display();
                break;
            default:
                printf("Invalid choice Please enter correct choice");

        }
    }
    while(choice<6);
    return 0;
}