// number of times each element occurs
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
        
    int count=0;

    if(found==0){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }


        if (found!=1){
            printf("the number %d is %d times.\n",arr[i],count);
           }
    }
}