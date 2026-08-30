#include<stdio.h>
int main(){
    int n;
    int num;
    printf("enter your number : ");
    scanf("%d", &n);
    for(int num=2 ; num<=n ; num++){
        int prime=1;
        for(int i=2; i<num ;i++){
          if(num%i==0){
          prime = 0;
            break;
          } 
          }
          if(prime==1){
            printf("%d\n",num);
        }
    }
}