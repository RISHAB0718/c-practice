//reversing the array
#include<stdio.h>

void reverse(int arr[],int n);


int main(){
    
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr,n);
    printf("The reverse array is : ");   
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
int temp=0;
void reverse(int arr[],int n){
    for(int i=0;i<n/2 ;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}