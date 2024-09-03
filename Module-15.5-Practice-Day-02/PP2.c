#include<stdio.h>

int my_Len(char *c)
{
    int count =0;
    while(c[count]!='\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char c[200];
    scanf("%s",c);
    printf("%d\n",my_Len(c));
}