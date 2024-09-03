#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

void Print(lli ar[],int n)
{
    if(n<0) return;
    if((n-1)%2==0)
        printf("%lld ",ar[n-1]);
    Print(ar,n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    
    lli ar[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&ar[i]);

    Print(ar,n);
    return 0;
}