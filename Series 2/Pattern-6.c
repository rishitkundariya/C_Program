#include<stdio.h>
void main()
{
	int n,i,j,k,l;
	printf("Enter the Numnber :- ");
	scanf("%d",&n);

	for (i = 1; i <= n;i=i+2)
	{  
	    for(k=0;k<n-i;k++){
			printf(" ");
			
	    }
	    for (j= 1; j <=i ; j++)
	    { 
			printf("%d ",j);
	    }
	
		
		printf("\n");
	}
	for (i = n-2; i>=0;i=i-2)
	 {  
		for(k=0;k<n-i;k++){
				printf(" ");
				
		    }
		for (j= 1; j <=i ; j++)
		{ 
				printf("%d ",j);
		}
			
		printf("\n");
	}
}
