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

    lli n;
    scanf("%lld",&n);
    lli arr[n];
    for (lli i = 0; i < n; i++) {
        scanf("%lld",&arr[i]);
    }
    lli t;
    scanf("%lld",&t);

    for (lli i = 0; i < n; i++) {
        if(arr[i] == t)
        {
            printf("%lld\n",i);
            return 0;
        }
    }
    printf("-1\n");

    return 0;
}