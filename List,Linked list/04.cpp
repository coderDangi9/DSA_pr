#include<stdio.h>
#include<conio.h>
#include<malloc.h>// for malloc function
#include<process.h> // for exit function

struct node{
    int info;
    struct node *prev;
    struct node *next;
};
typedef struct node NodeType;
NodeType *first = NULL;
NodeType *last = NULL;
void inserbeg(int el){
    NodeType *Newnode;
    Newnode = (NodeType *)malloc(sizeof(NodeType));
    Newnode ->info = el;
    Newnode -> prev = Newnode -> next = null;
    if(first == null){
        first=Newnode;
        last =Newnode;
    }
    else{
        Newnode -> next=first;
        first -> prev = Newnode;
        first = Newnode;
    }
}
void insertEnd(int el){
    NodeType *Newnode;
    Newnode = (NodeType *)malloc(sizeof(NodeType));
    Newnode ->info = el;
    Newnode -> prev = Newnode ->next =null;
    if(first == null){
        first = Newnode;
        last =Newnode;
    }
    else{
        last ->next = Newnode;
        Newnode->prev= last;
        last =Newnode;
    }
}
void DeleteFirst(){
    NodeType *temp;
    temp =first;
    if(first == null){
        printf("Empty linked list");
    }
    else if(first==last){
        first=null;
        last = null;
        free(temp);

    }
    else{
        first= first->next;
        free(temp);
    }
}
void DeleteLast(){
    NodeType *temp, *hold;
    temp = first;
    if(last == null){
        printf("Empty linked list");
    }
    else if(first == last){
        first = null;
        last = null;
        free(temp);
    }
    else{
        temp = first;
        while(temp->next != last){
            temp = temp -> next;
        }
        hold = temp->next;
        temp->next = null;
        last = temp;
        free(hold);
    }
}

void Display(){
    NodeType *temp;
    temp = first;
    if(first == null){
        printf("Enter linked list");
    }
    else{
        while(temp != last){
            printf(temp -> info);
            temp= temp->next;
        }
        printf(last->info);
    }
}
int main(){
    int choice;
    int item;
    do{
        printf("1.Insert at begining\t 2.Insert at last\t 3.delete first node\t 4.delete last node\t 5.Display");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                Printf("Enter data item to be inserted");
                scanf("%d",&item);
                insertbeg(item);
                break;
            case 2:
                printf("Enter data item to be inserted");
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
                printf("Invalid choice plz correct choice");

        }
    }while(choice<6);
}