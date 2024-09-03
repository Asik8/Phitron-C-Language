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
    char c[100001];
    fgets(c,100001,stdin);
    int len = strlen(c);

    for(int i=0;i<len;i++)
    {
        if(c[i]>= 'A' && c[i]<='Z')
            printf("%c",c[i]+32);
        else if(c[i] == ',')
            printf(" ");
        else if(c[i]>= 'a' && c[i]<='z')
            printf("%c",c[i]-32);
    }printf("\n");

    return 0;
}