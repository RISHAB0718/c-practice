#include<stdio.h>

int sumN(int n);


int main(){
    int n;
    printf("Enter the number for sum : ");
    scanf("%d",&n);
    printf("The sum is %d",sumN(n));

    return 0;
}

int sumN(int n){

    if(n==0){
      return 0;
    }

    return sumN(n-1) + n;
}