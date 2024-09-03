#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

lli Print(lli ar[],int n,int l,lli sum)
{
    if(n==l) return sum;
    sum+=ar[l];
    Print(ar,n,l+1,sum);
}

int main()
{
    int n,l=0;
    scanf("%d",&n);
    
    lli ar[n],sum=0;
    for(int i=0;i<n;i++)
        scanf("%lld",&ar[i]);

    printf("%lld\n",Print(ar,n,l,sum));
    return 0;
}