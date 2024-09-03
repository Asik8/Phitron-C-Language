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
    int st=1,sp=t-1;
 
    while(t--)
    {
        for(int i=0;i<sp;i++)
            printf(" ");
        for(int i=0;i<st;i++)
            printf("*");
        printf("\n");
        st+=2;
        sp--;
    }
 
    return 0;
}