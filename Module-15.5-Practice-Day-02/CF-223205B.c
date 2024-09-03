#include <stdio.h>

void Print(int *p)
{
    int i = 1;
    for (i = 1; i < *p; i++)
    {
       printf("%d ", i);
    }

    printf("%d\n", *p);
}

int main()
{
    int a;
    scanf("%d", &a);
    Print(&a);
    return 0;
}