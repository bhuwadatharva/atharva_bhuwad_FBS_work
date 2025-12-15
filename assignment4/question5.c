#include <stdio.h>

int main()
{
    int choice, n, temp, rem, rev, sum, i, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMENU");
    printf("\n1. Check Even or Odd");
    printf("\n2. Check Prime or Not");
    printf("\n3. Check Palindrome or Not");
    printf("\n4. Check Positive, Negative or Zero");
    printf("\n5. Reverse the Number");
    printf("\n6. Find Sum of Digits");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        if (n % 2 == 0)
            printf("Even");
        else
            printf("Odd");
        break;

    case 2:
        flag = 1;
        if (n <= 1)
            flag = 0;

        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("Prime");
        else
            printf("Not Prime");
        break;

    case 3:
        temp = n;
        rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if (rev == n)
            printf("Palindrome");
        else
            printf("Not Palindrome");
        break;

    case 4:
        if (n > 0)
            printf("Positive");
        else if (n < 0)
            printf("Negative");
        else
            printf("Zero");
        break;

    case 5:
        temp = n;
        rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        printf("Reverse = %d", rev);
        break;

    case 6:
        temp = n;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        printf("Sum of digits = %d", sum);
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}
