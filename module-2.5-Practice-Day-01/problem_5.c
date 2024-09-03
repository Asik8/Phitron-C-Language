#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a;
    scanf("%d",&a);

    if (a>=10000 && a<=20000)
        printf("Gucci Bag\n");
    else if(a>=5000 && a<10000)
        printf("Levis Bag\n");
    else if(a>20000)
    {
        printf("Gucci Bag\n");
        printf("Gucci Belt\n");
    }
    else
        printf("Something\n");

    return 0;
}