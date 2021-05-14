#include<stdio.h>
void print(int , int);

void main()
{
	int n=0;
	printf("Enter the number ");
	scanf("%d",&n);
	print(n,1);
	
}
void print(int n, int i){
	if(n >= i){
		printf("%d",i);
		print(n,i+1);
	}
	else if( i > n && n !=1 ){
		printf("%d",n-1);
		print(n-1,i+1);
	}
}
