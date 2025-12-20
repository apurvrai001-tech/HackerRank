/*Write a program that takes two integers as input and prints their sum.

Input Format

Two unique integers a and b.

Constraints

-10^4 ≤ a, b ≤ 10^4
Inputs will always be valid integers
Output Format

Single line printing the result as: The sum of {a} and {b} is {sum}.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d", &a);
    scanf(" %d", &b);
    printf("The sum of %d and %d is %d.", a, b, a + b);
    return 0;
}