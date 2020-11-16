#include<stdio.h>
void main()
{
	int n,i,j,k,l;
	printf("Enter the Numnber :- ");
	scanf("%d",&n);

	for (i = 1; i <= n;i++)
	{  
		for (j= 1; j <=i ; j++)
		{ 
			if(j<=i){
				printf("%d ",j);
			}
			else{
				printf(" ");
			}
		}
		for(k=0;k<n-i;k++){
			printf("  ");
			printf("  ");
	    }
	    
		for(l=i;l>0;l--){
			printf(" %d",l);
		}
		printf("\n");
	}
}
