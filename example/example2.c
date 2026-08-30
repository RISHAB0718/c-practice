#include<stdio.h>
int main()
{
    int x,y;
     printf("enter the first number : ");
     scanf("%d",&x);
     printf("enter the second number : ");
     scanf("%d",&y);
     int small= x*(x<=y)+y*(x>y);
     printf("%d",small);


return 0;
}