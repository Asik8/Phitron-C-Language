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
    return (*(lli *)a - *(lli *)b);
}

int main()
{
    lli a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    
    if(a<=b && a<=c)
    {
        printf("%lld\n",a);
        if(b<c)
        {
            printf("%lld\n%lld\n",b,c);
        }
        else
            printf("%lld\n%lld\n",c,b);
    }
    else if(a>=b && b<=c)
    {
        printf("%lld\n",b);
        if(a<c)
        {
            printf("%lld\n%lld\n",a,c);
        }
        else
            printf("%lld\n%lld\n",c,a);
    }

    else if(a>=c && b>=c)
    {
        printf("%lld\n",c);
        if(a<b)
        {
            printf("%lld\n%lld\n",a,b);
        }
        else
            printf("%lld\n%lld\n",b,a);
    }
    printf("\n%lld\n%lld\n%lld\n",a,b,c);
    return 0;
}