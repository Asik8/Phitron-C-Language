#include<stdio.h>

void swap_it(int *p,int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("%d %d",*p,*q);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap_it(&a,&b);
    return 0;
}