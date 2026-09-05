// intersection of two array.
#include <stdio.h>

int main()
{
    int x;

    printf("Enter n: ");
    scanf("%d", &x);

    int arr1[x];

    printf("Enter %d numbers: ", x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int y;

    printf("Enter n: ");
    scanf("%d", &y);

    int arr2[y];

    printf("Enter %d numbers: ", y);
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &arr2[i]);
    }

       for(int i=0;i<x;i++){
        int found=0;
        
        for(int j=0;j<y;j++){
            for(int k=0;k<i;k++){
                if(arr1[i]==arr1[k]){
                    found=1;
                    break;
                }
            }
            if(found!=1){
            if(arr1[i]==arr2[j]){
                printf("%d",arr1[i]);
                break;
            }
            }
            
        }
       }
    
}