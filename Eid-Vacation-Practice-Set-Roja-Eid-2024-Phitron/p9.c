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
    int t,c=0;
    scanf("%d",&t);

    if(t>=3)
    {
        c+= t/3;
        t%=3;
    }
    if(t>=2)
    {
        c+= t/2;
        t%=2;
    }
    c+=t;
    printf("%d\n",c);

    return 0;
}