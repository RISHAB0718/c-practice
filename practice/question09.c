//keeping zeroes at the last.

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
        if(i!=n-1){
        if(arr[i]==0 && arr[i+1]!=0){
            arr[i]=arr[i+1];
            arr[i+1]=0;
        }
        if(arr[i]==0 && arr[i+1]==0){
            for(int j=i+2;j<n;j++){
                if(arr[j]!=0){
                    arr[i]=arr[j];
                    arr[j]=0;
                    break;
                }
            }
        }
        
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }


    return 0;
}

/*
#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j++;
        }
    }

    printf("Array after moving zeros to the end:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/