#include <stdio.h>
#include <limits.h>

#define lli long long int
#define max_size 100000

void PrintMax(lli ar[],int n,lli max)
{
    if(n<0) 
    {
        printf("%lld\n",max);
        return;
    }
    if(ar[n]>max)
        max = ar[n];
    PrintMax(ar,n-1,max);
}

int main()
{

    int n;
    scanf("%d", &n);
    lli ar[n],max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    PrintMax(ar,n-1,max);
    return 0;
}