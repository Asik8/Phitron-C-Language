#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int d,q,r;
    scanf("%d %d %d",&d,&q,&r);

    printf("%d\n",(d-r)/q);

    return 0;
}