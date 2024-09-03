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

    for (int i=1;i<=t;i++)
    {
        if(i % 5)
        {
            printf("%d No\n",i);
        }
        else
        {
            printf("%d Yes\n",i);
        }
    }

    return 0;
}