#include<stdio.h>

void main()
{
	int n,i,sum=0;
	printf("Enter the  number :- ");
	scanf("%d",&n);
	int a=0,b=0,c=1;
	for(i=0;i<n;i++){
		sum=sum+c;
		printf(" c= %d \n ",c);
		a=b;
		b=c;
		c=a+b;
		
	}
	printf("Sum of %d Fibonaki number is %d",n,sum);
}
