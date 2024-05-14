#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3 //global variable
int stack[MAX] //stack implementation with an array.
int top =-1;
void push(int n);
int peek();
int pop();
int display();
int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n,value;
    do{
        printf("to choose your option\n 1.push\t 2.pop\t 3.peek\t 4.display\t 5.exit");
        scanf("%d",&n);
    }
    while(1){
        switch(n){
            case 1:
                printf("Enter the value which you want to push.");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                value= pop();
                printf("Removing value is %d",value);
                break;
            case 3:
                printf("Initial value of stack %d",peek());
                break;
            case 4:
                printf("/n");
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("You choose out of the option!!");

        }

    }
    return 0;
}
void push(int data){
    if(isFull()){
        printf("Stack is Overflow\n");
        exit(1);
    }
    else{
    top = top+1;
    stack[top]=data;}
}
int pop(){
    int value;
    if(isEmpty()){
        printf("Stack is Underflow.\n");
        exit(1);
    }
    value =pop();
    top=top-1;
    return value;
}
int peek(){
    if(isEmpty()){
        printf("stack is underflow.\n");
        exit(1);
    }
    return stack[top];
}
int display(){
    if(isEmpty()){
        printf("stack is underflow.\n");
        exit(1);
    }
    else{
        printf("\n Here is included  stack value.");
        for(int i=top; i>=0; i--){
            printf(" %d \t",stack[i]);
        }
    }
        printf("\n");
}