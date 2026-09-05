// printing only distinct element
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

    for(int i=0;i<n;i++){

        int found=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
            found =1;
            break;
            }
        }
        if (found!=1){
            printf("%d ",arr[i]);
           }
    }
}