// write a program to print a even and odd element in the array
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Even Elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {

            printf("%d\n", arr[i]);
        }
    }

    printf("Odd Elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {

            printf("%d\n", arr[i]);
        }
    }
}

// write a query to update the dept id of sakshi, atharva and rani to 4

// increase the salary of those employees who are having a current salary 10000  increase to 20%

// increase the salary by 5% of those employees who are from pune and dept id is 1
// display the details of employe who are male and dept_id=1
// display name and salary who are earning mre than 15000

// select name and salary with a city but onlyt thpse who have salary of rnage of 15000 to 30000