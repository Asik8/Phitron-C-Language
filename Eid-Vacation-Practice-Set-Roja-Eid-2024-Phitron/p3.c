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
    int t,a;
    scanf("%d %d",&t,&a);

    printf("%d %d\n",((t-a)/2)+a,((t-a)/2));

    return 0;
}