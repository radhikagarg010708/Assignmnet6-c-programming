//Write a C program that repeatedly displays the following menu
#include <stdio.h>

int main()
{
    int choice, num, original, remainder, reversed, sum, count;
    int temp, digit, armstrong;

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                original = num;
                reversed = 0;

                while(num != 0)
                {
                    remainder = num % 10;
                    reversed = reversed * 10 + remainder;
                    num = num / 10;
                }

                if(original == reversed)
                    printf("%d is a Palindrome Number.\n", original);
                else
                    printf("%d is not a Palindrome Number.\n", original);

                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                original = num;
                sum = 0;

                while(num != 0)
                {
                    digit = num % 10;
                    sum = sum + digit * digit * digit;
                    num = num / 10;
                }

                if(sum == original)
                    printf("%d is an Armstrong Number.\n", original);
                else
                    printf("%d is not an Armstrong Number.\n", original);

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                if(num <= 1)
                {
                    printf("%d is not a Prime Number.\n", num);
                    break;
                }

                int i, isPrime = 1;

                for(i = 2; i <= num / 2; i++)
                {
                    if(num % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }

                if(isPrime)
                    printf("%d is a Prime Number.\n", num);
                else
                    printf("%d is not a Prime Number.\n", num);

                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                sum = 0;
                temp = num;

                while(temp != 0)
                {
                    digit = temp % 10;
                    sum = sum + digit;
                    temp = temp / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &num);

                count = 0;
                temp = num;

                if(temp == 0)
                    count = 1;
                else
                {
                    while(temp != 0)
                    {
                        temp = temp / 10;
                        count++;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;

            case 6:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }

    } while(choice != 6);

    return 0;
}