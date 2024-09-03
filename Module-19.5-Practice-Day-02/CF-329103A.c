#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int d, n;
        scanf("%d %d", &d, &n);
        if (d == n)
            printf("Square\n");
        else
            printf("Rectangle\n");
    }
    return 0;
}