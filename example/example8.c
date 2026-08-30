#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    int a = num % 10 ;
    int b = num / 10 ;
    int c = b % 10 ;
    int d = b / 10 ;
    int e = d % 10 ; 
    if ((pow(a,3)+pow(c,3)+pow(e,3)) == num){
        printf("number is armstrong");
    }else{
        printf("not armstrong number");
    }

return 0;
}