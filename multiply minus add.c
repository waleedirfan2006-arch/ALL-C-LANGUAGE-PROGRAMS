#include<stdio.h>
#include<conio.h>
int main()
{    int a;
  int digit;
    int mul=1,add=0;
    printf("enter a number");
    scanf("%d",&a);
    while(a!=0)
{
    digit=a%10;
    add=add+digit;
    mul=mul*digit;
    a=a/10;

}    
    
    printf("%d-%d=%d",mul,add,mul-add);

}