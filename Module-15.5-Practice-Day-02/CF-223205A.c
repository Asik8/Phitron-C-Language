#include<stdio.h>

int Sum(int *p,int *q)
{
    int sum = *p+*q;
    return sum;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = Sum(&a,&b);
    printf("%d\n",sum);
}