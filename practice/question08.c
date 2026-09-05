//Given an array, print only the first repeated elements.

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
    printf("The first repeated element is : \n");
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                found++;
                printf("%d\n",arr[i]);
                break;
            }
        }
        if(found!=0){
                break;
            }
            }



    return 0;
}