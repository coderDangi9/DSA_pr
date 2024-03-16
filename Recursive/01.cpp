#include<stdio.h>
#include<conio.h>
void main(){
    int n,i; 
    int Fibonacci(int)
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("nth Fibonacci term is :\n ");
    printf("%d",Fibonacci(n));
    getch();
}
int Fibonacci(int k){
    if(k==1||k==2)
        return 1;
    else
        return Fibonacci(k-1)+Fibonacci(k-2);
}