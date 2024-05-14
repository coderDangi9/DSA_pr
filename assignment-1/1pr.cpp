#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3 // Global variable 
int stack[MAX];// stack implementation  with array

int top =-1;
void push(int n);
int pop();
int peek();
int display();

int isFull(){
    if(top = MAX-1){
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
    int n, value;
    while(1){
        printf("\n TO choose any option which you want\n");
        printf("\n 1.push \t 2.pop \t 3.peek \t 4.Display  \t 5.Exit \n=>");
        scanf("\t %d",&n);

        switch(n){
            case 1:
                printf("\n Enter the value which you want to push onto the stack\n =>");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                value=pop();
                printf("\n Deleated value is %d\n",value);
                break;
            case 3:
                printf("\n The element of stack is %d \n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("you choose default value !!!");
        }
    }
    return 0;
}
void push(int data){
    if(isFull()){
        printf("\n stack underflow");
        return;
    }
    else{
        top ++;
        stack[top]= data;
    }
}

int pop(){
    int n;
    if(isEmpty()){
        printf("\n stack underflow");
        exit(1);
    }
    n=stack[top];
    top=top-1;
    return n;
}
int peek(){
    if(isEmpty()){
        printf("\n stack underflow");
        exit(1);
    }
    return stack[top];
}

int display(){
    if(isEmpty()){
        printf("\n stack underflow, no data to show");
        exit(1);
    }
    else{
        printf("\n The elements in stack are:");
        for(int i= top; i>=0;i--){
            printf("%d\t",stack[i]);
        }
    }
    printf("\n");
}
