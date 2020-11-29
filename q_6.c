/*
6) Write a C program to print the sum of the cube of n natural numbers.
The sum of cubes of first 'n' natural no`s-
1^3+2^3+3^3+4^3+......+n^3=(n^2 * (n+1)^2)/4
*/

#include<stdio.h>
    int main(){
        int n, sum;
          
    printf("Enter the value of n:\n");
    scanf("%d", &n);
      sum = n*n*(n+1)*(n+1)/4;
    printf("The sum of squares of first %d natural no`s:%d\n", n, sum);
    
        return 0;
}
/*
Output:
Enter the value of n:
11
The sum of squares of first 11 natural no`s:4356
*/