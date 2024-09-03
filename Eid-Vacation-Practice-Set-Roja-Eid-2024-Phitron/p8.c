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
    int t,m;
    scanf("%d %d",&t,&m);

    printf("%d %d\n",t/m,t%m);

    return 0;
}