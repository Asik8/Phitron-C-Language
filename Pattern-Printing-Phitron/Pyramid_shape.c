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
    int x=t-1,k=1;

    while(t--)
    {
        for(int i=0;i<x;i++)
        {
            printf("  ");
        }
        for(int i=0;i<k;i++)
        {
            printf("* ");
        }
        for(int i=0;i<x;i++)
        {
            printf("  ");
        }
        printf("\n");
        k+=2;
        x--;
    }

    return 0;
}