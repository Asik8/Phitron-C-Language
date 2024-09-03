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
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int s1=0,s2=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                s1+=ar[i][j];
            if((i+j) == n-1)
            {
                s2+=ar[i][j];
            }
        }
    }
    int ans = s1-s2;
    printf("%d\n",abs(ans));

    return 0;
}