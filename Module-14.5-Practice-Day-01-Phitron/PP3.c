#include <stdio.h>
#include <string.h>

int char_to_ascii(char a)
{
    return (int)a;
}

int main()
{
    char c;
    scanf("%c", &c);
    int ans = char_to_ascii(c);
    printf("%d\n", ans);
    return 0;
}