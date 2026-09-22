//Write a C program to input the number of rows and display Pascal’s Triangle using nested loops.

#include <stdio.h>

int main()
{
    int n, i, j, space, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        // Print spaces
        for (space = 0; space < n - i - 1; space++)
        {
            printf("  ");
        }

        num = 1;

        // Print numbers
        for (j = 0; j <= i; j++)
        {
            printf("%d   ", num);

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}