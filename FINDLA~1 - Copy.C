
/**
 * C program to find last digit of a number
 */
 
#include <stdio.h>
 
int main()
{
    int n, lastDigit;
 
    /* Reads number from user */
    printf("Enter any number: ");
    scanf("%d", &n);
 
    /* Gets the last digit of number */
    lastDigit = n % 10;
 
    printf("\nLast digit = %d", lastDigit);
 
    return 0;
d}