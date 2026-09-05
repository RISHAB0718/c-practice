// largest length of array to achieve a given sum
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

    int max=0;
    for(int i = 0; i < n; i++)
    {
        int sum=0;
        int count=0;
       for(int j =i; j < n; j++)
       {

        sum+=arr[j];
        count++;
        if(sum==x){
            if(max<count){
                max=count;
            }
        }else if(sum>x){
            break;
        }
       }
    }
    printf("length :%d",max);


}