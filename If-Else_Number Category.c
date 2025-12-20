/*Write a C program to classify an integer N into one of the following categories based on specific conditions:

Categories:

Category A: N is divisible by 2 and 3 but not divisible by 5.
Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
Valid numbers: 6, 10, 14, 15, 21, 22, 33, ...
Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
Category D: N is a perfect square less than 200.
Valid squares: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, ...
Category E: If none of the above conditions are satisfied.
Note: Output the category that comes first in lexicographic order.

Input Format

A single integer N

Constraints

-10^3 ≤ N ≤ 10^3

Output Format

A single character representing the category of N ('A', 'B', 'C', 'D', or 'E').*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    if (scanf("%d", &N) != 1)
        return 0;
    if (N % 2 == 0 & N % 3 == 0 & N % 5 != 0)
    {
        printf("A");
    }
    else if (N > 20 && (N == 21 | N == 35 | N == 22 | N == 33 | N == 55 | N == 77))
    {
        printf("B");
    }
    else if (N > 9 && N < 100 && (N % 3 == 0 ^ N % 7 == 0))
    {
        printf("C");
    }
    else if (N == 1 || N == 4 || N == 9 || N == 16 || N == 25 || N == 36 || N == 49 || N == 64 || N == 81 || N == 100 || N == 121 || N == 144 || N == 169 || N == 196)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}