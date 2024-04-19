#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
struct node{
    int info;
    struct node *next;
};
void insert_atfirst(int item);
void traverse();
typedef struct node NodeType;
NodeType *head, *nnode;//Node1
int main(){
    int choice,item;
    head = NULL;
    do{
        printf("\nChoose Your Option :-\n 1.insert \t 2.traverse \t 3.Exit\n =>");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter an item to be inserted :-\n");
                scanf("%d",&item);
                insert_atfirst(item);
                break;
            case 2:
                traverse();
                break;
            case 3:
                exit(1);
            default:
                printf("You choose default option ,Please try again !!\n");

        }

    }
    while(choice<5);
    return 0;
}
void insert_atfirst(int item){
    nnode = (NodeType *)malloc(sizeof(NodeType));
    nnode -> info =item;
    nnode -> next = head;
    head = nnode;

}
void traverse(){
    NodeType *temp;
    temp = head;
    while(temp !=NULL){
        printf("%d\t", temp ->info);
        temp = temp ->next;
    }
}