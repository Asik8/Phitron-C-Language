#include <stdio.h>
#include <string.h>

char capital_to_small(char a)
{
    return a+32;
}

int main()
{
    char c;
    scanf("%c", &c);
    char ans = capital_to_small(c);
    printf("%c\n", ans);
    return 0;
}