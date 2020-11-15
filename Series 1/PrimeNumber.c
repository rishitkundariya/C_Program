#include<stdio.h>
void main()
{
	int n,i,j,prime=0;
	printf("Enter the number :- ");
	scanf("%d",&n);
	for(j=2;j<n;j++){	
		prime=0;
		for(i=2;i<j;i++){
			if(j%i==0){
				prime=1;
      }
		 }
		 if(prime==0){
			printf("%d number is prime \n ",j);
		 }
   }
}
