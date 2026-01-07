/*Write a program that prints a hollow diamond pattern with diagonals for a given integer n, where n represents the number of rows in the top half of the diamond (including the middle row).

The pattern must be structured as follows:

Horizontal diagonal: The middle row of the diamond contains astericks with no spaces.
Vertical diagonal: The center column of the diamond contains an asterisk in every row.
Each subsequent row above or below the middle row reduces the number of astericks symmetrically.
The astericks in each row form the hollow diamond shape with visible diagonals.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the pattern cannot be drawn by the given input value.

Input Format

A single integer n.
Constraints

-50 ≤ n ≤ 50
Output Format

Print the hollow diamond pattern with diagonals.
Print "Shape Not Possible" if the pattern cannot be drawn.
Sample Input 0

5
Sample Output 0

    *
   ***
  * * *
 *  *  *
*********
 *  *  *
  * * *
   ***
    *
Sample Input 1

-5
Sample Output 1

Shape Not Possible*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Shape Not Possible");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == n || j == i || j == 1)
                printf("*");
            else
                printf(" ");
        }
        for (int j = 2; j <= i; j++)
        {
            if (j == i || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            if (j == 1 || j == n - i + 1)
                printf("*");
            else
                printf(" ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            if (j == n - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}