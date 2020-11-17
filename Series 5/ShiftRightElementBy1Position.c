#include <stdio.h>
int array[5000];


void main()
{
	int i,j,k=0,temp=0,n;
	printf("Enter the Number which You want to enter in array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d number : - ",i+1);
		scanf("%d",&array[i]);
	}
	temp=array[0];
	for(i=0;i<n-1;i++){
		array[i]=array[i+1];
	}
	array[n-1]=temp;
	
	for (i=0;i<n ;i++ ) 
	{
		printf("Array Element %d is = %d \n",i+1,array[i]);
	}
	
}
