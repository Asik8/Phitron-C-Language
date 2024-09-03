#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n;
    scanf("%d",&n);
    lli arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld",&arr[i]);
    }

    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if(arr[i]<min)
            min = arr[i];
    }

    for (int i = 0; i < n; i++) {
        if(arr[i]==min)
        {
            printf("%lld %d\n",arr[i],i+1);
            break;
        }
    }

    return 0;
}
