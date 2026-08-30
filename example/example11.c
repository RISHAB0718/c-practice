#include<stdio.h>
int main()
{
    int n;
    printf("enter your number : ");
    scanf("%d", &n);
    for(int i=1; i<=n ; i++){
        for(int j=0; j<n ;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}