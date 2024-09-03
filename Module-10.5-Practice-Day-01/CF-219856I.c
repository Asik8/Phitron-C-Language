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
   char c[1001];
   scanf("%s",c);
    int len = strlen(c);
    
    int i = 0,j= len-1;
    bool Palindrome = true;
    while(i<=j)
    {
        if(c[i] !=c[j])
        {
            Palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (Palindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}