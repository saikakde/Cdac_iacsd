#include <stdio.h>

void main(){
    float basicSalary, earnings, deductions;
    printf("Enter basic salary of employee: ");
    scanf("%f", &basicSalary);
    printf("Enter earnings: ");
    scanf("%f", &earnings);
    printf("Enter deductions: ");
    scanf("%f", &deductions);

    float pf = 0.02 * basicSalary;
    float tax = 0.03 * basicSalary;
    float hra = 0.05 * basicSalary;
    float da = 0.08 * basicSalary;
    float netSalary = basicSalary + earnings - deductions - pf - tax + hra + da;

    printf("Net Salary: %.2f\n", netSalary);

}