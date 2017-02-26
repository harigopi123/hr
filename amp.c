
#include <stdio.h>
 
int main()
{
    int n, num, lastDigit, sum = 0;
 
    /* Reads a number from user */
    printf("Enter any number to check Armstrong number: ");
    scanf("%d", &n);
 
    /* Copies the original value of n to num */
    num = n;
 
    
     
    while(n != 0)
    {
        /* Finds last digit of number */
        lastDigit = n % 10; 
         
        /* Finds cube of last digit and adds to sum */
        sum += (lastDigit * lastDigit * lastDigit);
 
        n = n / 10;
    }
 
    /* Checks if sum of cube of digits is equal to original value or not. */
    if(num == sum)
    {
        printf("\n%d is Armstrong number.", num);
    }
    else
    {
        printf("\n%d is not Armstrong number.", num);
    }
 
    return 0;
}