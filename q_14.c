/*
14) Write a C program to find the gross salary of an employee
Gross salary = base salary + DA + HRA+Bonus
DA= 40 % of the base salary, HRA=80% of DA, and Bonus= 25% of HRA.
Ask user to enter the base salary only.
*/

#include <stdio.h>
int main()
{
    float basic, gross, da, hra, bonus;
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);
    da = 0.4*basic;
    hra = 0.8*basic;
    bonus = 0.25*hra;
    gross = basic + da + hra+ bonus;
    printf("the gross salary of an employee : %f\n", gross);
    
    return 0;
}
/*
Output:
Enter basic salary of an employee: 5000
the gross salary of an employee : 12000.000000
*/