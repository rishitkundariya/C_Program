#include <stdio.h>
int array[5000];
void QuickSort(start,end);
int Split(start,end);
void main()
{
	int i,j,k=0,temp=0,n;
	printf("Enter the Number which You want to enter in array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d number : - ",i+1);
		scanf("%d",&array[i]);
	}

	QuickSort(0,n-1);
	
	for (i=0;i<n ;i++ ) 
	{
		printf("Array Element %d is = %d \n",i+1,array[i]);
	}
	
}

void QuickSort(start,end){
	int s;
	if(start>=end){
		return ;
	}
	s=Split(start,end);
	QuickSort(start,s-1);
	QuickSort(s+1,end);
}
int Split(start,end){
	int p=array[start];
	int i=start, j=end,temp=0;
	while(i<j){
		while(array[i]<=p){
			i++;
		}
   		
  		while(array[j]>p){
  			j--;
		}
    		
    	if(i<j){
    		temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
				
		
	}
	array[start]=array[j];
	array[j]=p;
	return j;
}
