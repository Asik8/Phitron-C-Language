#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int d,n;
    scanf("%d %d", &d,&n);
    float price = (d*(float)n)/(100-d);
    printf("%0.2f\n",price+n);
    return 0;
}