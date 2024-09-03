#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a;
    scanf("%d",&a);

    if (a>0)
        printf("positive\n");
    else if(a == 0)
        printf("zero\n");
    else
        printf("negative");

    return 0;
}