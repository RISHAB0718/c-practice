#include<stdio.h>
int main()
{
    char x;
    printf("enter the number : ");
    scanf("%s", &x);
    printf("%d", x >= '0' && x <= '9');

return 0;
}