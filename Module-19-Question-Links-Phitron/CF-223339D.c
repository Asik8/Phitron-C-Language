#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

void PrintDigit(char n[],int l,int i)
{
    if(i == l)
    {
        printf("\n");
        return;
    }
    printf("%c ",n[i]);
    PrintDigit(n,l,i+1);
}

int main()
{
    int t;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        char n[12];
        scanf("%s",n);
        int len = strlen(n);
        int i=0;
        PrintDigit(n,len,i);
    }

    return 0;
}