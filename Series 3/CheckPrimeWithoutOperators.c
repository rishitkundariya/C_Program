#include<stdio.h>
#include <math.h>
void main()
{
	int n,i,j;
	int count=0;

	printf("Enter the number :- ");
	scanf("%d",&n);

	int squreroot=(int)sqrt(n);

	for(j=2;j<=squreroot;j++)
	{
		i=j;
		while(i<=n){
			if(i==n){
				i=i+j;
				count++;
			}
			else{
				i=i+j;
			}
		}
	}
	if(count>0){
		printf("%d is not prime number ",n);
	}
	else{
		printf("%d is prime number",n);
	}

}  
