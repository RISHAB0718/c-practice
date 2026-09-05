// missing number in array sequence
#include<stdio.h>


int main(){

    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int arr[n-1];

    printf("Enter %d numbers: ",n-1);
    for(int i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int sumA=0;
    for(int i=0;i<n-1;i++){
        sumA+=arr[i];
    }
    printf("The missing number is %d",sum-sumA);

    return 0;
}