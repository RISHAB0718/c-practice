#include<stdio.h>
int main(){
    int n=6;
    int a=0;
    int b=1;
    int next;
    for(int i=0; i<=n ;i++){
        printf("%d\n",a);
        next=a+b;
        a=b;
        b=next;
    }
}