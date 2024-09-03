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
    int n,m;
    scanf("%d %d", &n,&m);
    lli ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%lld", &ar[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int l=0,r=m-1;
        while(l<r)
        {
            lli temp = ar[i][l];
            ar[i][l] = ar[i][r];
            ar[i][r] = temp;
            l++;
            r--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", ar[i][j]);
        }printf("\n");
    }

    return 0;
}