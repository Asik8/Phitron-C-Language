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
    char c;
    scanf("%c",&c);

    if(c=='z')
        printf("a\n");
    else
        printf("%c\n",c+1);
   

    return 0;
}