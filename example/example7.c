#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d" , &num);
    if(num >= 1){
        printf("natural number");
    } else {
        printf("not natural number");
    }

return 0;
}