// second element that appears more than once
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter %d number : ",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=0;
    for(int i=0;i<n;i++){

        int found = 0;

    for(int j = 0; j < i; j++){
       if(arr[i] == arr[j])
       {
        found = 1;
        break;
       }
    }


        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
            count++;
            }
        }
if(found == 0 && count > 1)
{
    temp++;
}
        if(temp==2){
             printf("the second element that occurs more than once is %d",arr[i]);
             break;
        }
    }

}