#include <stdio.h>
#include <string.h>

char small_to_capital(char a)
{
    return a-32;
}

int main()
{
    char c;
    scanf("%c", &c);
    char ans = small_to_capital(c);
    printf("%c\n", ans);
    return 0;
}