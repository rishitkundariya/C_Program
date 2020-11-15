#include<stdio.h>
void main()
{
	int n,i,j,sum=0;
	printf("Enter the number :- ");
	scanf("%d",&n);
	int m=n;
	while(n/10> 0){
		sum = sum + (n%10);
		n=n/10;
	}
		sum = sum + (n%10);
	if(m%sum==0){
		printf("Enter Number %d is Harshad Number ",m);
	}
	else
	{
			printf("Enter Number %d is not Harshad Number ",m);
	}
}
