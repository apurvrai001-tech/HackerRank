/*Given an array of integers, determine the minimum element present in the array.

Input Format

First line: Integer N
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the minimum element of the array.

Sample Input 0

5
1 3 5 7 9
Sample Output 0

1
Sample Input 1

4
-5 -2 -9 -1
Sample Output 1

-9
Sample Input 2

1
50
Sample Output 2

50
Sample Input 3

6
5 5 5 5 5 5
Sample Output 3

5
Sample Input 4

4
1000000000 -1000000000 0 50
Sample Output 4

-1000000000*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d\n", &n);
    long long a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long min = a[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("%lld", min);
    return 0;
}