//Complete menu driven program in c to perform various operation in the simply linked list

#include<stdio.h>
#include<conio.h>
#include<malloc.h>// for malloc function
#include<process.h> // for exit function

struct node{
    int info;
    struct node *next;
};
typedef struct node NodeType;
NodeType *First, *last;
First=last= NULL;
void insert_atfirst(int);
void insert_givenposition(int);
void insert_atend(int);
void delet_first();
void delet_last();
void delet_nthnode();
void info_sum();
void count_nodes();
void display();
int main(){
    int choice;
    int item;
    do{
        printf("\n Menu of Program :-\n");
        printf("1.insert first\t 2.insert at given position\t 3.insert at last\t 4. Delete first node\t 5. delete last");
        printf("\n 6.delete nth node\t 7.info sum\t 8.count nodes\t 9.Display items\t 10.Exit\n");
        printf("Enter you choice\n =>");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter item to be inserted\n=>");
                scanf("%d",&item);
                insert_atfirst(item);
                break;
            case 2:
                printf("Enter item to be inserted\n=>");
                scanf("%d",&item);
                itsert_givenposition(item);
                break;
            case 3:
                printf("Enter item to be inserted\n=>");
                scanf("%d",&item);
                insert_atend();
                break;
            case 4:
                delet_first();
                break;
            case 5:
                delet_last();
                break;
            case 6:
                delet_nthnode();
                break;
            case 7:
                info_sum();
                break;
            case 8:
                count_nodes();
                break;
            case 9:
                display();
                break;
            case 10:
                exit(1);
                break;
            default:
                printf("invalid choice \n");
        }
    }
    while(choice<10);
    return 0;
}
void insert_atfirst(int item){
    NodeType *Newnode;
    Newnode = (NodeType*)mallco(sizeof(NodeType));
    if(first == NULL){
        Newnode->next=NULL;
        first=newnode;
        last =newnode;
    }
    else{
        Newnode->next=first;
        first=Newnode;
    }
}
void insert_givenposition(int item){
    int pos,i;
    NodeType *Newnode, *temp;
    newnode->info=item;
    printf("Enter position of a node at which you want to insert a new node\n =>");
    scanf("%d",&pos);
    if(first==NULL){
        first=newnode;
        last=newnode;
    }
    else{
        temp = first;
        for(i=1;i<pos-1;i++){
            temp = temp->next;
        }
        Newnode ->next=temp->next;
        temp->next = Newnode;
    }
}
void insert_atend(int item){
    NodeType *Newnode;
    Newnode =(NodeType*)malloc(sizeof(NodeType));
    Newnode->info=item;
    Newnode->next=NULL;
    if(first==NULL){
        first =newnode;
        last=newnode;
    }else{
        last->next=newnode;
        last=newnode;
    }
}
void delet_first(){
    NodeType *temp;
    if(head ==NULL){
        printf("Void deletion\n");
        return ;
    }
    else{
        temp = head;
        head = head->next;
        free(temp);
    }
}
void delet_last(){
    NodeType *hold, *temp;
    if(head==NULL){
        printf("Void deletion.");
        return;
    }
    else if(head->next==NULL){
        hold=head;
        head=NULL;
        free(hold);
    }
    else{
        temp= head;
        while(temp->next->next !=NULL)
            temp= temp->next;
        hold= temp->next;
        temp->next=NULL;
        free(hold);
    }
}
void delet_nthnode(){
    NodeType *hold, *temp;
    int pos,i;
    if(first==NULL){
        printf("Void deletion\n");
        return;
    }
    else{
        temp =first;
        printf("Enter position of node which node is to be deleted\n");
        scanf("%d",&pos);
        for(i=1;i<pos-1;i++)
            temp= temp->next;
        hold = temp ->next;
        temp ->next =hold->next;
        free(hold);
    }
}
void info_sum(){
    NodeType *temp;
    temp = first;
    while(temp !=NULL){
        printf("%d\t",temp->info);
        temp =temp->next;
    }
}
void count_nodes(){
    int cnt =0;
    NodeType *temp;
    temp=first;
    while(temp !=NULL){
        cnt++;
        temp=temp->next;
    }
    printf("total nodes= %d",cnt);
}
void display(){
    NodeType *temp;
    temp=first;
    if(first ==null){
        printf("Empty linked list");
        exit(1);
    }
    else{
        while(temp !=NULL){
            printf("%d\t",temp ->info);
            temp =temp->next;
        }
    }
}