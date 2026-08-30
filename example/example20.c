#include<stdio.h>
int main(){

    int a,b;
    printf("Enter the number (base , power) : ");
    scanf("%d %d",&a,&b);
    int mypow=1;
    for(int i=0 ; i<b ;i++){
        mypow*=a;
    }
    printf("The answer is %d",mypow);


    return 0;
}