#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int rear =-1, front =0;
void enqueue(int n);
int dequeue();
int display();

int isFull(){
    if(rear >= MAX-1){
        return 1;
    }
    else
        return 0;
}
int isEmpty(){
    if(rear<front){
        // printf("Queue is Underflow");
        return 1;
    }
    else
        return 0;
}

int main(){
    int n, item;
    while(1){
        printf("To choose your Option::\n 1.Enqueue\t 2.Dequeue \t 3.Display\t 4.Exit\n =>");
        scanf("%d",&n);

        switch(n){
            case 1:
                printf("Enter the inserting value into queue\n =>");
                scanf("%d"&item);
                enqueue(item);
                break;
            
            case 2:
                item = dequeue();
                printf("Deleting item is %d", item);
                break;
            
            case 3:
                display();
                break;
            
            case 4:
                exit(1);
            
            default :
                printf("You choose default option.");
        }

    }
}
void enqueue(int value){
    if(isFull()){
        printf("Queue is OverFlow");
        return;
    }
    else{
        rear++;
        queue[rear]=value;
        
    }
}

int dequeue(){
    if(isEmpty()){
        printf("Queue is UnderFlow !");
        exit(1);
    }
    else{
        int value = queue[front--];
        return value;
    }
}
int display(){
    if(isEmpty()){
        printf("Que is Underflow\n");
        exit(1);
    }
    else{
        printf("Showing Queue item :-\n");
        for(int i=0;i<rear; i++){
            // for(front=0; front <rear; front++){
            printf("%d\t",queue[i]);
        }
    }
    printf("\n");
}