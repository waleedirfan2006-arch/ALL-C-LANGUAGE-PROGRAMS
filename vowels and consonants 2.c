#include<stdio.h>
#include<conio.h>

int main()
{
char ch;
printf("enter the character");

scanf("%c",& ch);

if(ch=='a'|| ch=='e'|| ch=='i' ||ch=='o')
{
printf("the character is vowel");
}
else
{
printf("the character is constant");
}
    return 0;
}