#include<stdio.h>
void main()
{
	int n,i,j,k,l;
	printf("Enter the Numnber :- ");
	scanf("%d",&n);

	for (i = 1; i <= n;i++)
	{  
		for (j= n; j >= i ; j-- )
		{   
			printf("* ");
		
		}
		for(k=1;k<i;k++){
			printf("    ");
			
	    }
	    for (j= n; j >= i ; j-- ){   
			printf("* ");
		}
		
		printf("\n");
	}
	for (i = 1; i <= n;i++)
	{  
		for (j= 1; j <= i ; j++ )
		{   
			printf("* ");
		
		}
		for(k=i;k<n;k++){
			printf("    ");
			
	    }
	    for (j= 1; j <= i ; j++ ){   
			printf("* ");
		}
		
		printf("\n");
	}
	
	
}
