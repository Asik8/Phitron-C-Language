#include<stdio.h>
#include<stdlib.h>

void fun(int *p)// receiving the address of x using pointer
{
    *p = 100; // changing the value of x in fun function using pointer
}

int main()
{
    int x=10;
    printf("Before fun function: %d\n",x);
    fun(&x); //pass the adress of x in fun function
    printf("After fun function: %d\n",x);
}