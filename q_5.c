/*
5) Write a C program to print the sum of the square of n natural numbers. The sum of squares of first 'n' natural no`s-
1^2+2^2+3^2+.....+n^2=n*(n+1)*(2n+1)/6
*/
#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    sum = n * (n + 1) * (2 * n + 1) / 6;
    printf("The sum of squares of first %d natural no`s:%d\n", n, sum);

    return 0;
}
/*
Output:
Enter the value of n:
2
The sum of squares of first 2 natural no`s:5

Enter the value of n:
15
The sum of squares of first 15 natural no`s:1240
*/