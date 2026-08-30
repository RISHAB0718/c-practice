#include<stdio.h>
#include<math.h>

float squareroot(int n);


int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The square root of %d is %f",n,squareroot(n));

}


float squareroot(int n){
   float squareroot=sqrt(n);
   return squareroot;
}




