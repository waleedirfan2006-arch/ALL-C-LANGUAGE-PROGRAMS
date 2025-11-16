//EXERCISE :1
//Write a C program to input a character from user and check whether given character is small alphabet, capital alphabet, digit or special character, using if else
#include<conio.h>
#include<stdio.h>
int main()
{
	int character;
	printf("enter a character");
	scanf("%d",&character);
	if(character>='A' && character<='Z')
	{printf("the entered character is capital");}
	else if(character>='a' && character<='z')
	{printf("the entered character is small");}
	else if (character>=0 && character<=9)
	{printf("the entered character is a digit ");}
	else 
	{printf("it is a special character");}
	return 0;

	
}
