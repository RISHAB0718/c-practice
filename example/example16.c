#include<stdio.h>

int sumD(int n);


int main(){

    printf("sum of digit is %d",sumD(143));

}

int sumD(int n){
    if(n==0){
        return 0;
    }

return sumD(n/10) + n%10;
}