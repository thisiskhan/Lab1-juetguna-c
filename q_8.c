/*
8) Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a C program to convert this temperature into Centigrade degrees.
[ C = (F – 32) / 1.8 ]
*/
#include <stdio.h>
int main()
{
    int temf;
    float temc;
    printf("Enter the Temperature of a city in Fahrenheit degrees is:\n");
    scanf("%d", &temf);
    temc = (temf - 32) / 1.8;
    printf("The Temperature of a city in Centigrade degrees is: %f\n", temc);

    return 0;
}
/*
Enter the Temperature of a city in Fahrenheit degrees is:
45
The Temperature of a city in Centigrade degrees is: 7.222222
*/