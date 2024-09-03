#include <stdio.h>
#include <string.h>
#define lli long long int

int main()
{
    char a[10000001];
    scanf("%s",a);

    int cnt[26] = {0};
    
    for (int i = 0; i < strlen(a); i++)
    {   
        if (a[i] >= 'a' && a[i] <= 'z'){
            int val = a[i] - 'a';
            cnt[val]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
            printf("%c : %d\n",'a'+i, cnt[i]);
    }

    return 0;
}

