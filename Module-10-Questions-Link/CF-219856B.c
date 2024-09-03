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
    char a[1000001];
    fgets(a,1000001,stdin);

    int i=0;
    while(a[i] !='\\')
    {
        printf("%c",a[i]);
        i++;
    }

    return 0;
}