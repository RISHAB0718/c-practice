#include<stdio.h>


int main(){

    int arr[10];
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i=0 ; i<10; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("the largest number in the given array is %d",max);

    return 0;
}