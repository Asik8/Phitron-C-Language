#include<stdio.h>
#include<stdlib.h>

/* Pointer (*ptr) is like another variable which stores the location of x(by declaring int *ptr = &x;) not the value of x and the poiner has it's own memory location. we can access the vaue of x using pointer by dereferencing it (printf("value_*ptr=%d\n",*ptr);). Size of all pointer is 4 bytes. because it needs 4 bites to store the location "Doesn't matter if we use int,float,double,char".
*/
int main()
{
    int x= 200;
    int *ptr = &x;
    printf("*ptr = %p \nlocation of *ptr=%p\nlocation of x=%p \nx=%d \nvalue_*ptr=%d\n",ptr,&ptr,&x,x,*ptr);
    // changing value of x using pointer:
    *ptr = 500;
    printf("%d\n",*ptr);
}

