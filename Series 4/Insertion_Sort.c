#include <stdio.h>
void main()
{
	int i,array[5000],j,k=0,temp=0,n,min;
	printf("Enter the Number which You want to enter in array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d number : - ",i+1);
		scanf("%d",&array[i]);
	}
	
	for ( i=1;i<n ;i++ ) 
	{
		temp=array[i];
		j=i-1;
		while(temp<array[j] && j>=0)
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
	}
	for (i=0;i<n ;i++ ) 
	{
		printf("Array Element %d is = %d \n",i+1,array[i]);
	}
	
}
