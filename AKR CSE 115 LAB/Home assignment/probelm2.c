#include<stdio.h>
int main()
{
    float basic_salary,dearness_allowance,houserant_allowance,gross_salary;
    printf("Enter your basic salary: ");
    scanf("%f",&basic_salary);

    dearness_allowance=basic_salary*0.4;
    houserant_allowance=basic_salary*0.2;
    gross_salary=basic_salary+dearness_allowance+houserant_allowance;

    printf("Gross salary is %.3f",gross_salary);

    return 0;
}
