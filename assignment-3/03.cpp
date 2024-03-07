#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3
int queue[MAX];
int rear =-1, front =0;
void Enqueue(int n);
int Dequeue();
int Display();

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
    int n, value;
    while(1){
        printf("\nTo choose your Option::\n 1.Enqueue\t 2.Dequeue \t 3.Display\t 4.Exit\n =>");
        scanf("%d",&n);

        switch(n){
            case 1:
                printf("Enter the inserting value into queue\n =>");
                scanf("%d",&value);
                Enqueue(value);
                break;
            
            case 2:
                value = Dequeue();
                printf("Deleting value is %d", value);
                break;
            
            case 3:
                Display();
                break;
            
            case 4:
                exit(1);
            
            default :
                printf("You choose default option.");
        }

    }
}
void Enqueue(int value){
    if(isFull()){
        printf("Queue is OverFlow !!\n");
        
    }
    else{
        rear++;
        queue[rear]=value;
        
    }
}

int Dequeue(){
    if(isEmpty()){
        printf("Queue is UnderFlow!!\n");
        
    }
    else{
        int value = queue[front++];
        return value;
    }
}
int Display(){
    if(isEmpty()){
        printf("Queue is Underflow\n");
        exit(1);
    }
    else{
        printf("Showing Queue item :-\n");
        for(int i=front;i<=rear; i++){
            printf("%d\t",queue[i]);
        }
    }
    printf("\n");
}