// number of pairs for a sum
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

    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    int count=0;
    for(int i = 0; i < n; i++)
    {
       for(int j = i + 1; j < n; j++)
       {

        int sum=arr[i]+arr[j];
        if(sum==x){
            count++;
        }
       }
    }
    printf("there are %d pairs for sum = %d ",count,x);


}