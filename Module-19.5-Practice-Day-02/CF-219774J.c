#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
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
    int n;
    scanf("%d", &n);
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);

    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] == arr[0])
            count++;
    }

    if(count%2==1)
        printf("Lucky\n");
    else
        printf("Unlucky\n");

    return 0;
}