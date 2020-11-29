/*
12) The distance between two cities (in km.) is input through the keyboard. 
Write a C program to convert and print this distance in meters, feet, inches and centimeters.
(Hint: 1 meter = 3.281 feet)
*/

#include<stdio.h>
int main()
{
    float km, m, cm, f, in;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    /* calculate the conversion */
    m = km * 1000;
    cm = km * 1000 * 100;
    f = km * 3280.84;
    in = km * 39370.08;
    printf("The distance in Feet: %f\n", f);
    printf("The distance in Inches: %f\n", in);
    printf("The distance in Meters: %f\n", m);
    printf("The distance in Centimeters: %f\n", cm);
    return (0);
}

/*
Output:
Enter distance in kilometers: 2
The distance in Feet: 6561.680176
The distance in Inches: 78740.156250
The distance in Meters: 2000.000000
The distance in Centimeters: 200000.000000
*/