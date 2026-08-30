#include<stdio.h>

void mypow(int a,int b);


int main(){
    int a,b;
    printf("Enter the number (base , power) : ");
    scanf("%d %d",&a,&b);
    mypow(a,b);

    return 0;
}

void mypow(int a,int b){
    int result=1;
    for(int i=0 ; i<b ;i++){
        result*=a;
    }
    printf("The answer is %d",result);


}