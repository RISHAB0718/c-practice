// union of two arrays.
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
        printf("%d ",arr1[i]);
    }

       
        for(int j=0;j<y;j++){
            int found=0;
            for(int k=0;k<x;k++){
                if(arr2[j]==arr1[k]){
                    found=1;
                    break;
                }
            }
            for(int k=0;k<j;k++){
                if(arr2[j]==arr2[k]){
                    found=1;
                    break;
                }
            }
             if(found!=1){
                printf("%d ",arr2[j]);
            }
            
        }
    
}