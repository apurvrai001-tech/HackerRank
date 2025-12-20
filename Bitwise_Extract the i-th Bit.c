/*Given an integer n and a position i, your task is to write a program to extract the value of the i-th bit of n. The i-th bit is counted from the right, starting at position 0 (0-based indexing). Return 1 if the bit is set, otherwise return 0.

Input Format

A single integer n representing the number.
A single integer i representing the bit position to extract.
Constraints

-2^31 ≤ n ≤ 2^31
0 ≤ i ≤ 31
Output Format

Output a single integer, which is the value of the i-th bit of n (either 0 or 1)*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    if (scanf("%d %d", &n, &i) != 2)
        return 0;
    int res = (n >> i) & 1;
    printf("%d", res);
    return 0;
}