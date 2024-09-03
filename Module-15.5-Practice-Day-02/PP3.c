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

int count_odd(int *ar,int n)
{
    int count=0,i=0;
    for(i=0;i<n;i++)
    {
        if(*(ar+i)%2==1)
            count++;
    }
    return count;
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
    printf("%d\n",count_odd(ar,n));

    return 0;
}