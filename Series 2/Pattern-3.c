#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the Numnber :- ");
	scanf("%d",&n);

	for (i = 1; i <= n;i++)
	{  
		for (j= 1; j <=n-i+1; j++)
		{ 
			if(i==1  || j==1 || j==n-i+1 ){
				printf("* ");
			}
			else{
				printf("   ");
			}
			
		}
		printf("\n");
	}
}
