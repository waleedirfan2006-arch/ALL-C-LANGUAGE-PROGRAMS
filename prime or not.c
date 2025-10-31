#include<stdio.h>
#include<conio.h>

  main()
    {
     int i,no,m=0;
     
     printf("enter any no ");
     scanf("%d",&no);
     
     for(i=2;i<=no-1;i++)
     
     {
     if(no%i==0)
     {
     printf("number is not prime ");
     m=1;
     break;
     }
     }
     if(m==0)
     printf("number is prime ");
     
     getche();
     }
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    