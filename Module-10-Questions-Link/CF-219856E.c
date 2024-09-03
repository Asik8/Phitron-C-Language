#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    char a[1000001];
    fgets(a, 1000001, stdin);
    lli l = strlen(a);

    lli i = 0, count = 0;
    while (i < l)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            count += a[i] - '0';
        }
        i++;
    }

    printf("%lld\n", count);

    return 0;
}