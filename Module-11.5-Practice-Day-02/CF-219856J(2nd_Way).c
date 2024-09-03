#include<stdio.h>
#include<math.h>
#include<string.h>

#define lli long long int
#define max_size 100000

int main()
{
    char c;
    int cnt[26] = {0};
    while(scanf("%c",&c)!=EOF)
    {
        cnt[c-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
            printf("%c : %d\n",i+'a',cnt[i]);
    }

    return 0;
}