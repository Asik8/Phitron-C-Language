#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

void count_odd(int *ar, int n)
{
    *(ar+(n-1)) = 100;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ar+i));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    count_odd(ar, n);
    return 0;
}