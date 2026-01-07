/*Given an integer n, write a program to calculate the n-th prime number, starting from 1.

Input Format

A single integer 𝑛.
Constraints

1 <= n <=104
Output Format

Print the n-th prime number.
Sample Input 0

6
Sample Output 0

13
Explanation 0

13 is the 6th prime number.

Sample Input 1

12
Sample Output 1

37*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int i = 2, j;
    int count = 0;
    int res;
    while (count < n)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            count++;
            res = i;
        }
        i++;
    }
    printf("%d", res);
    return 0;
}