#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char c[101];
        scanf("%s",c);
        int len = strlen(c);

        if(len<11)
            printf("%s\n",c);
        else
        {
            printf("%c%d%c\n",c[0],len-2,c[len-1]);
        }
    }

    return 0;
}