#include<stdio.h>
#include<stdlib.h>

/* Pointer (*ptr) is like another variable which stores the location of x(by declaring int *ptr = &x;) not the value of x and the poiner has it's own memory location. we can access the vaue of x using pointer by dereferencing it (printf("value_*ptr=%d\n",*ptr);).
*/
int main()
{
    int x= 200;
    int *ptr = &x;
    int *p = x;
    printf("*ptr = %p \nlocation of *ptr=%p\nlocation of x=%p\n*p= %p \nx=%d \nvalue_*ptr=%d\n",ptr,&ptr,&x,p,x,*ptr);
}

