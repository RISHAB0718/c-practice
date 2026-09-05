//Given an array, print only the distinct elements

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
    printf("The output is : \n");
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                found++;
                break;
            }
        }
                    if(found==0){
                printf("%d\n",arr[i]);
            }
    }


    return 0;
}