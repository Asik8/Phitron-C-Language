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
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int s1;
    scanf("%d",&s1);
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == s1)
            {
                found = true;
                break;
            }
        }
        if(found == true)
            break;
    }
    if(found == true)
        printf("will not take number\n");
    else
        printf("will take number\n");

    return 0;
}