//Write a C program to input a positive integer and determine whether it is a palindrome using a loop.
#include <stdio.h>
int main()
{
    int n, o, r=0, d;

    printf("Enter a possitive integer: ");
    scanf("%d", &n);
  o = n;
  while(n > 0)
  {
    d = n % 10;
    r = r * 10 +d;
    n = n / 10;
  }
    
  if (o == r)
    printf("%d is a palidrome", o);
    
    else 
             printf("%d is not a palidrome", o);

      return 0;
}