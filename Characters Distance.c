/*Write a program that takes two lowercase characters and prints how many letters apart they are in the alphabet.

Input Format

Two lowercase characters char1 and char2 separated by space.

Constraints

Input letters are lowercase a–z
char1 always comes before char2 in alphabetical order
Use ASCII arithmetic only
Output Format

Single line printing the result as:
The distance between {char1} and {char2} is {value}*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    printf("The distance between %c and %c is %d", ch1, ch2, ch2 - ch1);
    return 0;
}
