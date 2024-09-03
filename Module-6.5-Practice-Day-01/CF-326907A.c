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
    lli a,b;
    scanf("%lld %lld",&a,&b);

    if(a-b>0)
        printf("%lld\n",a-b);
    else
        printf("0\n");

    return 0;
}