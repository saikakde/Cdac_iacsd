#include<stdio.h>
int main(){
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);

    if((int)ch>=97 && (int)ch<=125){
        printf("%c",(char)(ch-32));
    }else if ((int)ch>=65 && (int)ch<=90)
    {
        printf("%c",(char)(ch+32));
    }else{
        printf("not an alphabet");
    }
}