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
    int t;
    scanf("%d",&t);

    int x = (t-30)/5;
    for(int i=1;i<=5;i++)
    {
        printf("%d ",x+2*i);
    }printf("\n");

    return 0;
}