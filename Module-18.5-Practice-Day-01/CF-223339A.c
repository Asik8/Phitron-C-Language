#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

void recursion(int n)
{
    if(n==0) return;
    printf("I love Recursion\n");
    recursion(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    recursion(n);
    return 0;
}