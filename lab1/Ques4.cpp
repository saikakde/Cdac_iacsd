#include<stdio.h>

int main(){
    int num;
    printf("enter the number to check even or odd");
    scanf("%d",&num);

    if(num%2==0){
        printf("the number is an even number");
    }else{
        printf("the number is an odd number");
    }
}