//Write a C program to input x and n and evaluate the following series.

#include <stdio.h>

int main()
{
    int x, n;
    int i, j;
    double sum = 0, power, factorial, term;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // Calculate x^i using a loop
        power = 1;
        for (j = 1; j <= i; j++)
        {
            power = power * x;
        }

        // Calculate i! using a loop
        factorial = 1;
        for (j = 1; j <= i; j++)

        {
            factorial = factorial * j;
        }

        term = power / factorial;

        // Add positive and negative terms
        if (i % 2 == 1)
        {
            sum = sum + term;
        }
        else
        {
            sum = sum - term;
        }
    }

    printf("Sum of the series = %.4lf\n", sum);

    return 0;
}

