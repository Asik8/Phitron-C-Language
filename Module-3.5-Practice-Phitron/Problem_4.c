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
    double c;
    char d;
    scanf("%lld %lld %lf %c",&a,&b,&c,&d);
    printf("%lld\n%lld\n%0.2f\n%c\n",a,b,c,d);

    return 0;
}