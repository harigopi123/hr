#include <stdio.h>

int main()
{
    int i, n, sum=0;

    /* Reads any number from user */
    printf("Enter any number to find sum of first n natural numbers: ");
    scanf("%d", &n);

    /*
     * Calculates sum of all natural numbers
     */
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("\nSum of first %d natural numbers = %d", n, sum);

    return 0;
} 
