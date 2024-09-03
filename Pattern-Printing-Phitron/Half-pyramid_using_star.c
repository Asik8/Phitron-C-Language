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
    int t,s=1;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf("* ");
        }
        printf("\n");
        s++;
    }

    return 0;
}