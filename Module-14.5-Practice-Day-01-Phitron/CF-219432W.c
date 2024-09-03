#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t;
    scanf("%d", &t);
    int st = 1, sp = t - 1;

    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < sp; i++)
            printf(" ");
        for (int i = 0; i < st; i++)
            printf("*");
        printf("\n");
        sp--;
        st += 2;
    }
    st = (t*2)-1,sp=0;
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < sp; i++)
            printf(" ");
        for (int i = 0; i < st; i++)
            printf("*");
        printf("\n");
        sp++;
        st -= 2;
    }

    return 0;
}