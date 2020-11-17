#include<stdio.h>
void main(){
	int n,m,i,j,k,array[500][500],sum=0;
	printf("Enter The value of n*m which you want to enter.\n");
	printf("Enter The value of n :- ");
	scanf("%d",&n);
	printf("Enter The value of m :- ");
	scanf("%d",&m);
	for(i=0;i<n;i++){
	         for(j=0;j<m;j++){
		printf("Enter The value %d rows and %d colums. ",i+1,j+1);
			scanf("%d",&array[i][j]);	
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d  ",array[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==0 || i==(n-1) || j==0 || j==(m-1)){
				sum = sum + array[i][j];
			}
		}
		
	}
		printf("Sum :- %d ",sum);
}
