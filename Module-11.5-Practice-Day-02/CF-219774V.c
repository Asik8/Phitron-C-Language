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
    int a,b;
    scanf("%d %d",&a,&b);

    int cnt[100001] = {0};

    for(int i=0;i<a;i++)
    {
        int x;
        scanf("%d",&x);
        cnt[x]++;
    }

    for(int i=1;i<=b;i++)
    {
        printf("%d\n",cnt[i]);
    }

    return 0;
}