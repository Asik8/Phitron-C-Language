#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

void Print(int n,int i)
{
    if(i==0) return 0;
    if(n==i)
        printf("%d",i);
    else
        printf(" %d",i);
    Print(n,i-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int i=n;
    Print(n,i);
    return 0;
}