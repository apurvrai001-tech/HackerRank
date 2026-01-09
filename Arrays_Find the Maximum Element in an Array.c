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
    long long max = a[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("%lld", max);
    return 0;
}
