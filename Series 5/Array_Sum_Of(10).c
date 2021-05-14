#include<stdio.h>

void main()
{
	int n=0,i;
	int array[100];
	printf("Enter the number ");
	scanf("%d",&n);
	for( i=0;i<n;i++){
		printf("Enter %d elemrnt ",i+1);
		scanf("%d",&array[i]);
	}

	for( i=0;i<n;i++){
		if(i==0){
			continue;
		}
		else{
			array[i]=array[i]+array[i-1];
		}
	}
	for( i=0;i<n;i++){
		printf(" %d elemrnt is %d ",i+1,array[i]);
		
	}
}
