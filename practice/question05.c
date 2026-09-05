// the second largest number in the given array
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
    int max=arr[0];
    for(int i=0 ; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int min=arr[0];
    for(int i=0 ; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }


    int max2=min;
    for(int i=0 ; i<n; i++){
        if(arr[i]>max2 && arr[i]<max){
            max2=arr[i];
        }
    }
    
    if(max!=min){
    printf("the largest number in the given array is %d\n",max);
    printf("the second largest number in the given array is %d",max2);
    }else{
        printf("there is no 2nd largest number");
    }

    return 0;
}