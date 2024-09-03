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
    lli a,b,k;
    scanf("%lld %lld %lld", &a,&b,&k);
    if(a%k == 0 && b%k == 0)
        printf("Both\n");
    else if(a%k == 0 && b%k !=0)
        printf("Memo\n");
    else if(b%k == 0 && a%k !=0)
        printf("Momo\n");
    else
        printf("No One\n");
    return 0;
}