/*
4) Write a C program to print the sum of n natural numbers.
The sum of first 'n' natural no`s-
1+2+3+.....+n=n*(n+1)/2
*/
#include<stdio.h>
    int main(){
         int n, sum;
         printf("Enter the value of n :\n");
         scanf("%d", &n);
         sum  = n*(n+1)/2;
         printf("The sum of first %d natural no`s : %d\n", n, sum);

    
        return 0;
}
/*
Output:
Enter the value of n :
5
The sum of first 5 natural no`s : 15
*/