// first element that appears only once
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter %d number : ",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
            count++;
            }
        }

        if(count==1){
            printf("the first element that occurs only once is %d",arr[i]);
            break;
        }
    }

}