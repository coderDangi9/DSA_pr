#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10 //Global variable

int queue[MAX];//Queue implementation
int rear =-1;
int front =0;

int isEmpty(){
    if(rear<front)
        return 1;
    else
        return 0;
}
int isFull(){
    if(rear == MAX-1)
        return 1;
    else
        return 0;
}
