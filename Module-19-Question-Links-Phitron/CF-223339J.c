#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

lli Factorial(lli n, lli i)
{
    if(n==0) return i;
    i*=n;
    Factorial(n-1,i);
}

int main()
{
    lli i = 1,n;
    scanf("%lld",&n);
    printf("%lld\n",Factorial(n,i));

    return 0;
}