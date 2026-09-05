//largest sequence length in increasing order
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
    int count =1;
    int max=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
        if(arr[i]>=arr[i+1]){
            if(max<count){
            max=count;
            }
            count=1;
        }
    }
    if(max < count)
{
    max = count;
}
    printf("%d",max);


}