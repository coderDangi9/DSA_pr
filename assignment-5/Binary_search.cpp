#include<stdio.h>
int main(){
    int n,a,i,low,high,mid;
    printf("Enter the number of element:-\n");
    scanf("%d",&n);

    int arr[n];
    printf("\n Here, the element in the sorted manner\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    
    printf("Enter the Value which you find:-\n");
    scanf("%d",&a);

    low=0;
    high=n-1;

    mid= (low+high)/2;

    while(low<=high){
        if(arr[mid]<a){
            low = mid+1;
        }
        else if(arr[mid]==a){
            printf("%d is found at the location %d",a,arr[mid]);
            break;
        }
        else{
            high = mid-1;
        mid = (low+high)/2;
        }
        if(low>high){
        printf("%d is not present in the array",a);}
    return 0;
    }
}