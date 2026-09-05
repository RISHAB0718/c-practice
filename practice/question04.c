// sum and avg of array
#include<stdio.h>

int sumA(int arr[],int n);
float avgA(int arr[],int n);

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
    printf("sum is : %d\n",sumA(arr,n));
    printf("avg is : %f\n",avgA(arr,n));

}

int sumA(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

float avgA(int arr[],int n){
    float sum=0;
    float avg;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    avg=sum/n;
    return avg;
}