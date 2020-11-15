#include<stdio.h>
int Factorial(int n) ;
void main()
{
	int n,i,j,sum=0;
	printf("Enter the number :- ");
	scanf("%d",&n);
	int m=n;
	while(n/10> 0){
		sum = sum + Factorial(n%10);
		n=n/10;
	}
		sum = sum + Factorial(n%10);
	if(sum == m){
		printf("Enter Number %d is Strong ",m);
	}
}
int Factorial(int n){
	if(n==1){
		return 1;
	}
	else {
		return n*Factorial(n-1);
	}
}
