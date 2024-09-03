#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int PrintVowels(char n[], int l, int i)
{
    if(l<0) return i;
    if(n[l] == 'a' || n[l] == 'A' || n[l] == 'e' || n[l] == 'E' || n[l] == 'i' || n[l] == 'I' || n[l] == 'o' || n[l] == 'O' || n[l] == 'U' || n[l] == 'u')
        i++;
    PrintVowels(n,l-1,i);
}

int main()
{
    char n[201];
    fgets(n,201,stdin);
    int len = strlen(n);
    int i = 0;
    printf("%d\n",PrintVowels(n, len-1, i));

    return 0;
}