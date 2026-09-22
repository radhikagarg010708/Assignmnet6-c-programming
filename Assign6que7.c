// Write a C program to input a positive decimal integer and convert it into binary using a loop. Do not use arrays, strings, or library conversion functions.
#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1, remainder;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}