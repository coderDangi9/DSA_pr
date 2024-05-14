#include<stdio.h>
#include<conio.h>
int BinarySearch(int a[100], int l , int r, int key){
    int m;
    int flag =0;
    m=(l+r)/2;
    if(l<=r){
        if(a[m] == key){
            flag = m;
        }
        else if(key<a[m]){
            return (a,l, m-1,key);
        }
        else{
            return (a,m+1,r,key);
        }
    }
    else 
        return flag;
}
int main(){
    int a[100], n,i, key;

    printf("Enter the array create number\n=>");
    scanf("%d",&n);

    printf("Enter the element of array\n ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter search item \n");
    scanf("%d",&key);

    int flag = BinarySearch(a,0,n-1,key);
    if(flag ==0){
        printf("Unsucessful search\n");
    }
    else{
        printf("%d position is got this item \n",flag+1);
    }
}