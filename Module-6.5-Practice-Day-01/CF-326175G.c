#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    lli n,m,k,count=0;
    scanf("%lld %lld %lld",&n,&m,&k);

    if(n>0 && m>0 && k>0)
    {
        lli min = n;
        if(m<min)
            min = m;
        if(k<min)
            min = k;
        count += min;
        n-=min;
        m-=min;
        k-=min;
    }

    if(n>1 && m>0 && k>0)
    {
        lli min = n/2;
        if(m<min)
            min = m;
        if(k<min)
            min = k;
        count += min;
        n-=min*2;
        m-=min;
        k-=min;
    }

    if(n>1 && k>0)
    {
        lli min = n/2;
        if(k<min)
            min = k;
        count += min;
        n-=min*2;
        k-=min;
    }

    printf("%lld\n",count);

    return 0;
}