/*You are given a 4-digit integer N.

Your task is to rearrange its digits in descending order, using only if-else statements.

Note:

You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.

Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.

Finally, print the rearranged digits without spaces.

Input Format

A single integer: {N}

Constraints

1000 ≤ N ≤ 9999
N is always a 4-digit integer.
Only if-else statements may be used for comparisons.
No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
Output Format

Print the four digits of N, rearranged in descending order, without spaces.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a, b, c, d;
    scanf("%c%c%c%c", &a, &b, &c, &d);
    if (a >= b && a >= c && a >= d)
    {
        printf("%c", a);
        if (b >= c && b >= d)
        {
            printf("%c", b);
            if (c >= d)
            {
                printf("%c", c);
                printf("%c", d);
            }
            else
            {
                printf("%c", d);
                printf("%c", c);
            }
        }
        else if (c >= b && c >= d)
        {
            printf("%c", c);
            if (b >= d)
            {
                printf("%c", b);
                printf("%c", d);
            }
            else
            {
                printf("%c", d);
                printf("%c", b);
            }
        }
        else
        {
            printf("%c", d);
            if (b >= c)
            {
                printf("%c", b);
                printf("%c", c);
            }
            else
            {
                printf("%c", c);
                printf("%c", b);
            }
        }
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%c", b);
        if (a >= c && a >= d)
        {
            printf("%c", a);
            if (c >= d)
            {
                printf("%c", c);
                printf("%c", d);
            }

            else
            {
                printf("%c", d);
                printf("%c", c);
            }
        }
        else if (c >= a && c >= d)
        {
            printf("%c", c);
            if (a >= d)
            {
                printf("%c", a);
                printf("%c", d);
            }
            else
            {
                printf("%c", d);
                printf("%c", a);
            }
        }
        else
        {
            printf("%c", d);
            if (a >= c)
            {
                printf("%c", a);
                printf("%c", c);
            }
            else
            {
                printf("%c", c);
                printf("%c", a);
            }
        }
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("%c", c);
        if (a >= b && a >= d)
        {
            printf("%c", a);
            if (b >= d)
            {
                printf("%c", b);
                printf("%c", d);
            }
            else
            {
                printf("%c", d);
                printf("%c", b);
            }
        }
        else if (b >= a && b >= d)
        {
            printf("%c", b);
            if (a >= d)
            {
                printf("%c", a);
                printf("%c", d);
            }
            else
            {
                printf("%c", d);
                printf("%c", a);
            }
        }
        else
        {
            printf("%c", d);
            if (a >= b)
            {
                printf("%c", a);
                printf("%c", b);
            }
            else
            {
                printf("%c", b);
                printf("%c", a);
            }
        }
    }
    else
    {
        printf("%c", d);
        if (a >= b && a >= c)
        {
            printf("%c", a);
            if (b >= c)
            {
                printf("%c", b);
                printf("%c", c);
            }
            else
            {
                printf("%c", c);
                printf("%c", b);
            }
        }
        else if (b >= a && b >= c)
        {
            printf("%c", b);
            if (a >= c)
            {
                printf("%c", a);
                printf("%c", c);
            }
            else
            {
                printf("%c", c);
                printf("%c", a);
            }
        }
        else
        {
            printf("%c", c);
            if (a >= b)
            {
                printf("%c", a);
                printf("%c", b);
            }
            else
            {
                printf("%c", b);
                printf("%c", a);
            }
        }
    }

    return 0;
}
