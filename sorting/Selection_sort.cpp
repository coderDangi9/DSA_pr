#include<stdio.h>
#include<conio.h>
void selection(int[], int);

int  main(){
    int n;
    int a[100], i;
    printf("Enter no of data items:\n");
    scanf("%d",&n);

    printf("Enter %d element of an array.\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The data items before sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    selection(a,n);
    printf("\nThe data items after sorting.\n");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}
// selection function
void selection(int a[], int n){
    int i,j,temp, index,least;
    for(i=0;i<n;i++){
        least = a[i];
        index =i;
        for(j=i+1;j<n;j++){
            if(a[j]<least){
                least = a[j];
                index =j;
            }
        }
        if(i != index){
            temp = a[i];
            a[i]= a[index];
            a[index] = temp;
        }
    }
}