/*
7) Write a C program to convert a given number of days into months and days.
*/
#include <stdio.h>
int main()
{

    int months, days;

    printf("Enter days\n");
    scanf("%d", &days);

    months = days / 30;
    days = days % 30;

    printf("Months = %d   Days = %d", months, days);

    return 0;
}
/*
Output:
Out put:  Enter days                                                  
   265                                                         
   Months = 8   Days = 25                                      
                                                               
   Enter days                                                  
   364                                                         
   Months = 12   Days = 4                                      
                                                               
   Enter days                                                  
   45                                                          
   Months = 1   Days = 15
*/
