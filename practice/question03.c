//Count even and odd numbers


#include<stdio.h>
int main(){
    int n;
    printf("enter the value ,how much number you want to enter : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d numbers: ",n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int countE=0;
    int countO=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            countE++;
        }else{
            countO++;
        }
    }
    printf("The number of even numbers is : %d\n",countE);
    printf("The number of odd numbers is : %d\n",countO);

    return 0;
}