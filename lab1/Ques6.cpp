#include<stdio.h>

int main(){
    float basicSalary,tax;
    printf("enter the basic Salary of employee: ");
    scanf("%f",&basicSalary);

    if(basicSalary <150000){
        tax =0;
    }else if(basicSalary <=300000 && basicSalary>= 150000){
        tax = 0.02; // ie 20 percent
    }else{
        tax = 0.03; // ie 30 percent

    }
    float incometax=0;
    incometax= basicSalary * tax;
    printf("income tax is %f",incometax);
}