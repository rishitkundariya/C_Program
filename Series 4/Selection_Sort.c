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
	
	for (j=0;j<n;j++ ) 
	{	min=j;
		for (k=j;k<n;k++ ) 
		{
			if (array[k]<array[min]) 
			{
				min=k;
			}	
		}
		temp=array[j];
		array[j]=array[min];
		array[min]=temp;
					
				}
	for (i=0;i<n ;i++ ) 
	{
		printf("Array Element %d is = %d \n",i+1,array[i]);
	}
	
}
