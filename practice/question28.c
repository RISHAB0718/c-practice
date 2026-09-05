#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Enter n: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &y);
  
    int z=x+y;

    int arr1[x];
    int arr2[y];
    int arr3[z];

    printf("Enter %d numbers: ", x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr1[i]);
        arr3[i]=arr1[i];
    }


    printf("Enter %d numbers: ", y);
    int i=x;
    for (int j =0; j < y; j++)
    {
        scanf("%d", &arr2[j]);
        arr3[i]=arr2[j];
        i++;
    }
    int min=arr3[0];
    for(int i=0;i<z;i++){
        for(int k=0;k<z;k++){
            if(arr3[i]<min){
                int j=0;
                arr3[j]=arr3[i];
                min=arr3[j];
                j++;
            }
        }
    }
    for(int i=0;i<z;i++){
       printf("%d",arr3[i]);
    }


}
    