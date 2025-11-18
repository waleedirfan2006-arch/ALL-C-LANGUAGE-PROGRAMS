#include<stdio.h>
#include<stdlib.h>
int factorial(int num);
int ncr(int n,int r);

int main()
{
    int n,r;
    printf("Enter value of n: ");   
    scanf("%d",&n);
    printf("Enter value of r: ");
    scanf("%d",&r);
    // int nfact=factorial(n);
    // int rfact=factorial(r);
    // int n_r_fact=factorial(n-r);
    int combination=ncr(n,r);
    printf("The combination C(%d, %d) is %d\n",n,r,combination);
    
    return 0;
}
int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
   
