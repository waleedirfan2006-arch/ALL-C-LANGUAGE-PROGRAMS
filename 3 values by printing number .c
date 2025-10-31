#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

int a,b,c;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
printf("enter third number\n");
scanf("%d",&c);
if(a>b && a>c)
{
printf("the highest value is %d",a);
}
else if(b>a && b>c)
{
printf("the highest value is %d",b);
}
else if(c>a && c>b)
{
printf("the highest value is %d ",c);
}
else
{
printf("all values are same ");
}
getche();

    return 0;
}