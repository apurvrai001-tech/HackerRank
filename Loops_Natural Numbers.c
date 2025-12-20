/*Write a program that takes a positive integer N as input from the user and prints all natural numbers from 1 to N, with each number followed by a space (including the last number).

Input Format

A single positive integer, N, representing the range limit.

Constraints

0 <= N <= 10^6

Output Format

Print all natural numbers from 1 to N, separated by a space.*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}