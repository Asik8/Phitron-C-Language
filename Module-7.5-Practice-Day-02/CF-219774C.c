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

    for (int i = 0; i < n; i++) {
        if(arr[i]>0)
            arr[i] = 1;
        else if(arr[i]<0)
            arr[i] = 2;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
