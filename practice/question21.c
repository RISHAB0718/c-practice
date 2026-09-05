//min difference
#include <stdio.h>
#include<stdlib.h>

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
    
    int minD=abs(arr[0]- arr[1]);
    for(int i = 0; i < n; i++)
    {
       for(int j = i + 1; j < n; j++)
       {

        int diff=abs(arr[i]-arr[j]);
        if(diff<minD){
            minD=diff;
        }
       }
    }
    printf("the min difference = %d ",minD);


}