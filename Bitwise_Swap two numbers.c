/*Write a program to swap two integers using only the bitwise XOR operator without using a temporary variable.

The program should take two integers, A and B, as input and output the swapped values.

Input Format

The first line contains an integer A
The second line contains an integer B
Constraints

(-10^5 ≤ A ≤ 10^5)
(-10^5 ≤ B ≤ 10^5)
Output Format

The first line contains the swapped value of A.
The second line contains the swapped value of B.*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num1, num2;
    scanf("%d\n%d", &num1, &num2);
    num1 = num1 ^ num2;
    num2 = num2 ^ num1;
    num1 = num1 ^ num2;
    printf("%d\n%d", num1, num2);
    return 0;
}