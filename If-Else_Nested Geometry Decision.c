/*Write a program to determine the type of 2D geometric figure based on the following properties:

Number of sides (n) – can be 3, 4, or 0 (for a circle).
Side lengths (a,b,c,d) – three sides if n=3, four if n=4, none for n=0.
Angles (A,B,C,D) in degrees – three angles if n=3, four if n=4, none for n=0..
The program should classify the figure into one of these categories:

Equilateral Triangle: n=3, all sides are equal, and all angles are 60°.
Isosceles Triangle: n=3, two sides are equal and the two angles opposite to the equal sides are congruent to each other
Scalene Triangle: n=3, all sides and angles are different.
Square: n=4, all sides are equal, and all angles are 90°.
Rectangle: n=4, opposite sides are equal, and all angles are 90°.
Rhombus: n=4, all sides are equal, but not all angles are 90°. Opposite angles are equal in a rhombus.
Parallelogram: n=4, opposite sides and opposite angles are equal.
Circle: n=0.
Invalid Figure: If the input is invalid or does not form a valid figure.
Input Format

An integer n: The number of sides
Three/Four/Zero integers (a,b,c,d): Positive values for side lengths
Three/Four/Zero integers (A,B,C,D): Angles in degrees
Constraints

n ∈ {0,3,4}.
-10^6 ≤ a,b,c,d ≤ 1000.
-10^6 ≤ A,B,C,D < 180.
Output Format

Print one of these:

Equilateral Triangle
Isosceles Triangle
Scalene Triangle
Square
Rectangle
Rhombus
Parallelogram
Circle
Invalid Figure*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, a, b, c, d, A, B, C, D;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("Circle");
    }
    else if (n == 3)
    {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);

        if ((a + b > c && a + c > b && b + c > a) && A + B + C == 180 && (A > 0 && B > 0 && C > 0 && a > 0 && b > 0 && c > 0))
        {
            if (a == b && b == c && A == 60 && B == 60 && C == 60)
            {
                printf("Equilateral Triangle");
            }
            else if ((a == b && B == A && a != c && b != c && A != C && B != C) || (a == c && A == C && a != b && b != c && A != B && B != C) || (b == c && B == C && a != b && a != c && A != C && A != B))
            {
                printf("Isosceles Triangle");
            }
            else if (a != b && b != c && a != c && A != B && B != C && A != C)
            {
                printf("Scalene Triangle");
            }
            else
            {
                printf("Invalid Figure");
            }
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    else if (n == 4)
    {
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &A, &B, &C, &D);

        if (a == b && b == c && c == d && A + B + C + D == 360 && (A > 0 && B > 0 && C > 0 && D > 0 && a > 0 && b > 0 && c > 0 && d > 0))
        {
            if (A == 90 && B == 90 && C == 90 && D == 90)
            {
                printf("Square");
            }
            else if (A == C && B == D)
            {
                printf("Rhombus");
            }
            else
            {
                printf("Invalid Figure");
            }
        }
        else if (a == c && b == d && A + B + C + D == 360 && (A > 0 && B > 0 && C > 0 && D > 0 && a > 0 && b > 0 && c > 0 && d > 0))
        {
            if (A == 90 && B == 90 && C == 90 && D == 90)
            {
                printf("Rectangle");
            }
            else if (A == C && B == D)
            {
                printf("Parallelogram");
            }
            else
            {
                printf("Invalid Figure");
            }
        }
        else
        {
            printf("Invalid Figure");
        }
    }
    else
    {
        printf("Invalid Figure");
    }

    return 0;
}