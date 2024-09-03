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

    int x = (t-16)/4;
    for(int i=1;i<=7;i+=2)
    {
        printf("%d ",x+i);
    }printf("\n");

    return 0;
}