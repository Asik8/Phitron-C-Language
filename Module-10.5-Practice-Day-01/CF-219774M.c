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
    int n;
    scanf("%d", &n);
    int ar[n];
    int min = 100000,max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i]<min)
            min = ar[i];
        if(ar[i]>max)
            max = ar[i];
    }

    for(int i=0;i<n;i++)
    {
        if(ar[i] == max)
            ar[i] = min;
        else if(ar[i] == min)
            ar[i] = max;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}