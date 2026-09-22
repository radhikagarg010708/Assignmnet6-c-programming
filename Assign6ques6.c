//Write a C program to input the number of rows and print the following pattern. For n = 5:
#include <stdio.h>
int main()
{
    int n, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);
 
    for (i = 1; i <= n; i++)
   {
        for(j = 1; j<=i ; j++ )
       {
         printf("%d, &num");
         num++;
       }   
       printf("\n");
    }

    return 0;
}