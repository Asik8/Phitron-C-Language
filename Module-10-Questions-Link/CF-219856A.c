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
    char a[10001],b[10001];
    fgets(a,10001,stdin);
    fgets(b,10001,stdin);
    
    printf("%d %d\n",strlen(a)-1,strlen(b)-1);
    int st = strlen(a)-1;
    int i=0;
    while(i <= (st-1))
    {
        printf("%c",a[i]);
        i++;
    }
    printf(" ");
    st = strlen(b)-1;
    i=0;
    while(i <= (st-1))
    {
        printf("%c",b[i]);
        i++;
    }

    return 0;
}