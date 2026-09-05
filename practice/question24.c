// largest length where number of zeroes and ones are same
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

    int max=0;
    for(int i = 0; i < n; i++)
    {
        int countZ=0;
        int countO=0;
       for(int j=i; j < n; j++)
       {
        if(arr[j]==0){
            countZ++;
        }else{
            countO++;
        }

        if(countZ==countO){
        if(max<countO+countZ){
            int maxN=countO+countZ;
            max=maxN;
        }

        }

       }
    }
    printf("length :%d",max);


}