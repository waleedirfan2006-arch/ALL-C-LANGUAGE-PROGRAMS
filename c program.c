#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    clrscr();
    int a;
    printf("enter the number \n");
    scanf("%d",&a);
    if(a>0)
    {
    printf("the number is positive");
    }
    else if(a<0)
    {
    printf("the number is negative");
    }
    else
    {
    printf("the number is zero");
    }
    
    getch();
    
}