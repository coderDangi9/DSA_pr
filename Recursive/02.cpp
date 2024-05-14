// Recursive soln of Tower of Hanoi
#include<stdio.h>
#include<conio.h>
int TOH(int, char, char , char)// Function type

int main(){
    int n;
    printf("Enter number of disk:-\n => ");
    scanf("%d", &n);
    TOH(n,'A','B','C');
    return 0;
}
int TOH(int n, char A, char B, char C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("Move disk %d from %c to %c",n,A,B);
        TOH(n-1,C,B,A);
    }
}