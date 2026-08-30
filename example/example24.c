#include<stdio.h>
int main(){

    int arr[11];
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter a new number to add in the array : ");
    scanf("%d",&arr[10]);
    for(int i=0;i<11;i++){
        printf("%d\t",arr[i]);
    }


    return 0;
}