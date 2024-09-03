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

    lli n;
    scanf("%lld", &n);
    char a[n];
    scanf("%s",a);

    lli sum  = 0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i]-'0';
    }

    printf("%lld\n",sum);

    return 0;
}