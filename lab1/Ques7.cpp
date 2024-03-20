#include<stdio.h>

int main(){
    char ch;
    printf("enter the chaaracter to check if is a vowel: ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' || ch == 'u' ){
        printf("%c is a vowel",ch);
    }else{
                printf("%c is not a vowel",ch);

    }
}