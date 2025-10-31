#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
clrscr();
int a,b,c;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
printf("enter third number\n");
scanf("%d",&c);
if(a>b && a>c)
{
printf("A is the highest");
}
else if(b>a && b>c)
{
printf("b is the highest");
}
else if(c>a && c>b)
{
printf("c is the highest");
}
else
{
printf("all values are same ");
}
getche();

    return 0;
}