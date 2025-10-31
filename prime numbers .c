#include<stdio.h>
#include<conio.h>

  main()
    {
     int i,j,n,m,num;
     
     printf("enter any no ");
     scanf("%d",&num);
     
     for(i=1;i<=num;i++)
     {
     n = i, m = 0 ;
     for ( j = 2 ; j <= n - 1 ; j ++ )
     {
      if(n%j==0)
     {
     m=1;
     break;
     }
     }
     if(m==0)
     printf("%d\n",n);
     
     }
     getche();
     }
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    