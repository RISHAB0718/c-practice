// number is in sequence or not

#include<stdio.h>


int main(){

    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d numbers: ",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sort=1;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            sort=0;
            break;
        }    
    }
    if(sort==1){
        printf("array is sorted");
    } else{
        printf("array is not sorted");
    }

    return 0;
}