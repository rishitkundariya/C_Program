#include<stdio.h>
void main()
{
	int n,i,sum=1;
	printf("Enter the number :- ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{	
		if(n%i==0)
		{
			sum=sum + i;
		}
		
	}
	if(sum == n ){
		printf("Enter number %d is Perfect",n);
	}
}
