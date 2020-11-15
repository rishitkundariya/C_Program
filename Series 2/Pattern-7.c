#include<stdio.h>
void main()
{
	int n,i,j,k,l;
	printf("Enter the Numnber :- ");
	scanf("%d",&n);

	for (i = 1; i <= n;i++)
	{  
	    for(k=0;k<=n-i;k++){
			printf(" ");
			
	    }
		for (j= 1; j <=i ; j++)
		{   if(j==i){
				printf("%d",j);
			}
			
		}
		for(k=2;k<=i;k++){
			printf(" ");
			printf(" ");
	    }
		for(l=i;l>1;l--){
			if(l==i){
		    	printf("%d",l);	
			}
			
			
		}
		
		printf("\n");
	}
	for (i = n-1; i>0;i--)
	{  
	    for(k=0;k<=n-i;k++){
			printf(" ");
			
	    }
		
		printf("%d",i);
		
		for(k=2;k<=i;k++){
			printf(" ");
			printf(" ");
	    }
		if(i!=1){
		printf("%d",i);	
		}
		
		printf("\n");
	}
	
}
