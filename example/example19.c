#include <stdio.h>

int mypow(int a,int b);


int main(){
    int a,b;
    printf("Enter the number (base , power) : ");
    scanf("%d %d",&a,&b);
    printf("The answer is %d",mypow(a,b));

}


int mypow(int a,int b){
    if(b==0){
        return 1;
    }

    return mypow(a,b-1) * a;
}

