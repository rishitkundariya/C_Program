#include<stdio.h>
void main()
{
	int n,i,j,sum=0;
	printf("Enter the number :- ");
	scanf("%d",&n);
	int m=n;
	while(n/10> 0){
		sum = sum + (n%10)*(n%10)*(n%10);
		n=n/10;
	}
		sum = sum + (n%10)*(n%10)*(n%10);
	if(sum == m){
		printf("Enter Number %d is Amstrong ",m);
	}
}
