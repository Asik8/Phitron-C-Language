#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

void Print(int n)
{
    if(n==0) return 0;
    Print(n-1);
    printf("%d\n",n);
}

int main()
{
    int n;
    scanf("%d",&n);
    Print(n);
    return 0;
}