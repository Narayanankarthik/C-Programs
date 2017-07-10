#include <stdio.h>
#include <math.h>
 
int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;
 
    // Reads a number from user
    printf("Enter any number: ");
    scanf("%d", &num);
 
    lastDigit = num % 10; //Gets last digit
    digits = (int)log10(num); //Total number of digits - 1
    firstDigit = (int)(num / pow(10, digits)); //Gets the first digit
 
    swappedNum = lastDigit;
    swappedNum *= (int)pow(10, digits);
    swappedNum += num % ((int)pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
 
    printf("\nOriginal number = %d", num);
    printf("\nNumber after swapping first and last digit: %d", swappedNum);
 
    return 0;
}
