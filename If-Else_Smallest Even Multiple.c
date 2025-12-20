/*Given a positive integer n, PRINT the smallest positive integer that is a multiple of both 2 and n.

Example 1:

Input: n = 5
Output: 10
Explanation: The smallest multiple of both 5 and 2 is 10.

Example 2:

Input: n = 6
Output: 6
Explanation: The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.

Input Format

Single integer input: {n}

Constraints

1 <= n <= 150
Output Format

Print the result: {calculated_num}*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    if ((n % 2) == 1)
    {
        printf("%d", n * 2);
    }
    else
    {
        printf("%d", n);
    }
    return 0;
}
