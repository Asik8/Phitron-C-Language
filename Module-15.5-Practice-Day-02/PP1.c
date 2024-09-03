#include<stdio.h>

int my_abs(int *p)
{
    return abs(*p);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",my_abs(&a));
}