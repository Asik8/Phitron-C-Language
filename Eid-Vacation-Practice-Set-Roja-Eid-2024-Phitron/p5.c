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
        lli n,sum = 0;
        scanf("%lld",&n);
        for (lli i = 1; i <= n; i++) {
            sum+=i;
        }
        printf("%lld\n",sum);
    return 0;
}