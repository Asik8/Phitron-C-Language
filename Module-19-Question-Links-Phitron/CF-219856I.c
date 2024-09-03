#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

void Palindrome(char n[],int l,int r)
{
    if(l>=r)
    {
        printf("YES\n");
        return;
    }
    if(n[l] != n[r])
    {
        printf("NO\n");
        return;
    }
    Palindrome(n,l+1,r-1);
}

int main()
{
    char n[1001];
    scanf("%s", n);
    int len = strlen(n),l=0,r=len-1;
    Palindrome(n,l,r);
    
    return 0;
}