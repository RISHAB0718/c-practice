//reversing the number
#include<stdio.h>

int reverse(int n);


int main(){
    int n;
    printf("Enter the number for reverse : ");
    scanf("%d",&n);
    printf("The reverse number is %d",reverse(n));   
    return 0;
}

int reverse(int n){
    int a;
    int rev=0;
    while(n!=0){
            a=n%10;
            n/=10;
            rev = rev*10 + a;
        }
    return rev;
}