/*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.*/

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    if (scanf("%d %d %d %d %d %d %d %d %d %d\n%d %d\n%d %d\n%d %d\n", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p) != 16)
        return 0;
    switch (k)
    {
    case 0:
        a = (a + l) % 10;
        break;

    case 1:
        b = (b + l) % 10;
        break;

    case 2:
        c = (c + l) % 10;
        break;

    case 3:
        d = (d + l) % 10;
        break;

    case 4:
        e = (e + l) % 10;
        break;

    case 5:
        f = (f + l) % 10;
        break;

    case 6:
        g = (g + l) % 10;
        break;

    case 7:
        h = (h + l) % 10;
        break;

    case 8:
        i = (i + l) % 10;
        break;

    case 9:
        j = (j + l) % 10;
        break;
    }
    switch (m)
    {
    case 0:
        a = (a + n) % 10;
        break;

    case 1:
        b = (b + n) % 10;
        break;

    case 2:
        c = (c + n) % 10;
        break;

    case 3:
        d = (d + n) % 10;
        break;

    case 4:
        e = (e + n) % 10;
        break;

    case 5:
        f = (f + n) % 10;
        break;

    case 6:
        g = (g + n) % 10;
        break;

    case 7:
        h = (h + n) % 10;
        break;

    case 8:
        i = (i + n) % 10;
        break;

    case 9:
        j = (j + n) % 10;
        break;
    }
    switch (o)
    {
    case 0:
        a = (a + p) % 10;
        break;

    case 1:
        b = (b + p) % 10;
        break;

    case 2:
        c = (c + p) % 10;
        break;

    case 3:
        d = (d + p) % 10;
        break;

    case 4:
        e = (e + p) % 10;
        break;

    case 5:
        f = (f + p) % 10;
        break;

    case 6:
        g = (g + p) % 10;
        break;

    case 7:
        h = (h + p) % 10;
        break;

    case 8:
        i = (i + p) % 10;
        break;

    case 9:
        j = (j + p) % 10;
        break;
    }
    printf("%d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, i, j);

    return 0;
}