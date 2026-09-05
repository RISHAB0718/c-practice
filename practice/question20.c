// max sum(by pair)
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
    
    int maxsum=arr[0]+arr[1];
    for(int i = 0; i < n; i++)
    {
       for(int j = i + 1; j < n; j++)
       {

        int sum=arr[i]+arr[j];
        if(sum>maxsum){
            maxsum=sum;
        }
       }
    }
    printf("the max sum = %d ",maxsum);


}