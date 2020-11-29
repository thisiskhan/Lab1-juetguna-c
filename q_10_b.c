/*
10) Two numbers are input through the keyboard into two locations C and D. Write a C program to interchange the contents of C and D.
(a) using third variable (b) without using third variable
*/

#include <Stdio.h>
int main()
{
    int C, D, T;
    printf("Enter the value of C: ");
    scanf("%d", &C);

    printf("Enter the value of D: ");
    scanf("%d", &D);

    C = C + D; //c=30, d=20
    D = C - D; //d=10, c=30
    C = C - D; //c=20

    printf("\n The value of C: %d\n", C);
    printf("\n The value of D: %d\n", D);
    return 0;
}
/*
Output:
Enter the value of C: 10
Enter the value of D: 20

 The value of C: 20

 The value of D: 10
*/