#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define MAX 5
int Qu[MAX];
int front=MAX-1;
int rear=MAX-1;

void enqueue(int);
int dequeue();
int display();
int isFull(){
    if( (rear+1)%MAX == front )
        return 1;
    else
        return 0;
}
int isEmpty(){
    if(rear==front)
        return 1;
    else 
        return 0;
}
int main(){
    int n, value;
    while(1){
        printf("\n To choose your Option:-\n");
        printf("1.Enqueue\t 2.Dequeue\t 3.Display\t 4.Exit \n =>");
        scanf("%d",&n);

        switch(n){
            case 1:
                printf("Enter a value which you insert.");
                scanf("%d",&value);
                enqueue(value);
                break;
            
            case 2:
                value = dequeue();
                printf("\n %d is a Removing value from Queue \n",value);
                break;
            
            case 3:
                display();
                break;
            
            case 4:
                exit(1);
            
            default:
                printf("Choosing Option Error,Please Try Again!!");

        }
    }
}
void enqueue(int item){
    if(isFull()){
        printf("\n Queue is Overflow.\n ");
        
    }
    else{
        rear =(rear+1)%MAX;
        Qu[rear]=item;

    }
}
int dequeue(){
    if(isEmpty()){
        printf("\n Queue is Underflow.\n");
        
    }
    else{
        front = (front+1)%MAX;
        int x= Qu[front];
        return x;
    }
}
int display(){
    if(isEmpty()){
        printf("Queue is Underflow\n");
        exit(1);
    }
    else{
        for(int i=(front+1)%MAX; i!=rear;i=(i+1)%MAX){
            printf("%d\t",Qu[i]);
        }
    }
    printf("%d\t",Qu[rear]);
}