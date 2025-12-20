/*Write a program to print all even numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single positive integer, N, representing the range limit.
Constraints

0 <= N <= 10^6
Output Format

Print all even numbers from 1 to N (inclusive), separated by a space.*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}