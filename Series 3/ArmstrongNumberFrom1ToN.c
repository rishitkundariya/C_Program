#include<stdio.h>
void main()
{
	int n,i,j,sum=0;
	printf("Enter the number :- ");
	scanf("%d",&n);
	int m;
	for(i=2;i<n;i++)
	{	m=i;
		sum=0;
		while(m/10> 0){
			sum = sum + (m%10)*(m%10)*(m%10);
			m=m/10;
		}
			sum = sum + (m%10)*(m%10)*(m%10);
		if(sum == i){
			printf("Enter Number %d is Amstrong ",i);
			printf("\n ");
		}
	}	
}
