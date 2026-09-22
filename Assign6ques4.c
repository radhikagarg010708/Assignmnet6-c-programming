//Write a C program to input a positive integer and determine whether it is a perfect number. A perfect number is equal to the sum of its positive divisors excluding itself. For example:        6=1+2+3.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a possitive interger,");
    }

    else
    {
          for (i = 1; i <=n / 2; i++)
          {
            if(n % i == 0)
            { 
                sum = sum + i;
            }
          }
          if (sum == n)
          printf("%d is a perfect number",n);
          else
          printf("%d is not a perfect number",n);
    }  
                return 0;

}