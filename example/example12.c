#include<stdio.h>
int main(){
    int n;
    int prime=1;
    printf("enter your number : ");
    scanf("%d", &n);
    for(int i=2; i<n ;i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==1){
        printf("number is prime");
    }else{
        printf("number is not prime");
    }

return 0;
}