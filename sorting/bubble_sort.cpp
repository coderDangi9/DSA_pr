#include<stdio.h>
#include<conio.h>
void bubble(int[], int);
int main(){
    int n;
    int a[100],i;
    printf("Enter no of data items:\n");
    scanf("%d",&n);
    printf("Enter %d data items:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The data items before sorting:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    bubble(a,n);
    printf("The data items after sorting:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void bubble(int a[], int n) //bubble function.
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}