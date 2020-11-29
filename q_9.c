/*
9) The length & breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a C program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.
*/

#include <stdio.h>
#define pi 3.14
int main()
{
    int length, breadth, radius;
    int aor, por, aoc, coc;
    printf("Enter the value of length:\n");
    scanf("%d", &length);
    printf("Enter the value of breadth:\n");
    scanf("%d", &breadth);
    printf("Enter the value of radius:\n");
    scanf("%d", &radius);

    aor = length * breadth;
    printf("The area of rectangle of length %d and breadth %d is %d \n", length, breadth, aor);
    por = 2 * (length + breadth);
    printf("The perimeter of rectangle of length %d and breadth %d is %d \n", length, breadth, por);
    aoc = pi * radius * radius;
    printf("The area of circle of radius %d is %d \n", radius, aoc);
    coc = 2 * pi * radius;
    printf("The circumference of circle of radius %d is %d\n ", radius, coc);

    return 0;
}
/*
Output:
Enter the value of length:
10
Enter the value of breadth:
15
Enter the value of radius:
5
The area of rectangle of length 10 and breadth 15 is 150 
The perimeter of rectangle of length 10 and breadth 15 is 50 
The area of circle of radius 5 is 78 
The circumference of circle of radius 5 is 31
*/