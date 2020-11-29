/*
3) Write program that takes 3 digit number as an input. Program should compute and display the sum of digits in a number.
*/

#include <stdio.h>

int main()
{
    long num, temp, digit, sum = 0;

    printf("Enter the number \n");
    scanf("%ld", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}
/* Output:
Enter the number 
900
Given number = 900
Sum of the digits 900 = 9

Enter the number 
450
Given number = 450
Sum of the digits 450 = 9
*/