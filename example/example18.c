#include<stdio.h>

void hotcold(float temp);


int main(){
    int temp;
    printf("Enter the temperature : ");
    scanf("%d",&temp);
    hotcold(temp);

    return 0;
}

void hotcold(float temp){
    if(temp<=30){
        printf("Temperature is cold");
    } else{
        printf("temperature is hot");
    }
}

