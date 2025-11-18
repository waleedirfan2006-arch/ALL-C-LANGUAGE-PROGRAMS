#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5;
    int*x=&a;
    *x=10;
    printf(" %p\n",&a);//print address of a
    printf(" %p\n",&x);//print address of pointer x
    printf(" %d\n",*x);//print value of a using pointer
     printf("Value of a: %d\n",a);//value of a is changed to 10

    return 0;
}