/**
 * C program to find power of any number
 */
 
#include <stdio.h>
#include <math.h> //Used for pow() function
 
int main()
{
    double x, y, power;
 
    // Reads two numbers from user to calculate power
    printf("Enter base: ");
    scanf("%lf", &x);
    printf("Enter exponent: ");
    scanf("%lf", &y);
 
    // Calculates x^y 
    power = pow(x, y);
 
    printf("x ^ y = %.2lf", power);
 
    return 0;
} 