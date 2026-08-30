#include<stdio.h>

int n=9999;
int a,b;
int sum=0;
int main()
{
        while(n!=0){
            a=n%10;
            b=n/10;
            n=b;
            sum+=a;
        }
       
    printf("sum is %d",sum);
}


