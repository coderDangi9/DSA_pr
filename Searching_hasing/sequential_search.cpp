#include<stdio.h>
#include<conio.h>
int main(){
    int a[100], n,key,i;
    printf("Enter the no. of an array \n =>");
    scanf("%d",&n);

    printf("Enter the number \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter any search value \n =>");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(key == a[i]){
            printf("%d is at the position is %d",key,i+1);
            break;
        }
    }
            if(i==n){
            printf("%d is not involved in an array\n", key);
        }
    return 0;
}