#include<stdio.h>
int Factorial(int n) ;
void main()
{
	int n,r,sum=0;
	printf("Enter the value of N number :- ");
	scanf("%d",&n);
	printf("Enter the value of r number :- ");
	scanf("%d",&r);
	sum=(Factorial(n))/(Factorial(r)*Factorial(n-r));
	printf("Enter the value of %dC%d is  :- %d ",n,r,sum);
}
int Factorial(int n){
	if(n==1 || n==0 ){
		return 1;
	}
	else {
		return n*Factorial(n-1);
	}
}
