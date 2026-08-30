#include<stdio.h>

int countN(int arr[],int n,int x);

int main(){

    int arr[10];
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Give the number you want to check : ");
    scanf("%d",&x);
    printf("The number %d ocuured %d times in this array.",x,countN(arr,10,x));

    return 0;
}

int countN(int arr[],int n,int x){
    int count=0;
    for(int i=0; i<n ; i++){
        if(arr[i]==x){
            count++;
        } 
    }

    return count;
}
