// number to make it in sequence .

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
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}   