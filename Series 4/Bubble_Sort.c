#include <stdio.h>
void main()
{
	int i,array[5000],j,k=0,temp=0,n;
	printf("Enter the Number which You want to enter in array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d number : - ",i+1);
		scanf("%d",&array[i]);
	}
	
	for ( j=0;j<n-1 ;j++ ) 
	{	k=0;
		for (i=0;i<n-1 ;i++ ) 
		{
			if (array[i]>array[i+1]) {
			 			
				temp=array[i];
			 	array[i]=array[i+1];
			 	array[i+1]=temp;
			 	k=1;
			}
		}
		if(k==0){
			break;
		}
	}
	for (i=0;i<n ;i++ ) 
	{
		printf("Array Element %d is = %d \n",i+1,array[i]);
	}
	
}
