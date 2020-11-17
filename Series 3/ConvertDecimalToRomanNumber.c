                #include <stdio.h>
void main() 
{   
    int n,i,k;

    printf("Enter a number: ");
    scanf("%d", &n);
	printf("Roman numerals: "); 
    while(n != 0)
    {
if (n >= 1000)    
        {
           printf("m");
           n -= 1000;
        }
        else if (n >= 900) 
        {
           printf("cm");
           n -= 900;
        }        
   else if (n >= 500)  
        {           
           printf("d");
           n -= 500;
        }
   else if (n >= 400)  
        {
           printf("cd");
           n -= 400;
        }
  else if (n >= 100) 
        {
           printf("c");
           n -= 100;                       
        }
 else if (n >= 90)   
        {
           printf("xc");
           n -= 90;                                              
        }
else if (n >= 50)   
        {
           printf("l");
           n -= 50;                                                                     
        }
  else if (n >= 40)   
        {
           printf("xl");           
           n -= 40;
        }
   else if (n >= 10)    
        {
           printf("x");
           n -= 10;           
        }
  else if (n >= 9)    
        {
           printf("ix");
           n -= 9;                         
        }
   else if (n >= 5)     
        {
           printf("v");
           n -= 5;                                     
        }
  else if (n >= 4)     
        {         printf("iv");
           n -= 4;                                                            
        }
  else if (n >= 1)     
        {
           printf("i");
           n -= 1;                                                                                   
        }

    }

    }
