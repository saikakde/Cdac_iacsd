#include<stdio.h>

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

    if(num%5==0 && num%7==0){
        printf("the number is divisible by both 5 and 7");
    }else{
        printf("the number is not divisible by both 5 and 7");
    }
}