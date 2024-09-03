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
    int t;
    scanf("%d",&t);
    if(t%10==0)
    {
        printf("YES\n");
        return 0;
    }

    int a = t%10;
    t/=10;
    
    if(t>=a && t%a==0)
        printf("YES\n");
    else if(a>=t && a%t==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}