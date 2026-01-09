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
    long double sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += a[i];
    }
    long double avg = sum / n;
    printf("%Lf", avg);
    return 0;
}
