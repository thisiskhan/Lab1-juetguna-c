// 2) Write a C program that takes two numbers as an input and print the average them.
#include <stdio.h>
int main()
{
    int num1, num2;
    float avg;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    avg= (float)(num1+num2)/2;

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d and %d is: %.2f\n",num1,num2,avg);

    return 0;
}
/*
Output:
Enter first number: 5
Enter second number: 4
Average of 5 and 4 is: 4.50
*/