#include <stdio.h>
int array[5000];
void MergeSplite(start,end);
void MergeJoin(start,mid,end);
void main()
{
	int i,n;
	printf("Enter the Number which You want to enter in array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d number : - ",i+1);
		scanf("%d",&array[i]);
	}

	MergeSplite(0,n-1);
	
	for (i=0;i<n ;i++ ) 
	{
		printf("Array Element %d is = %d \n",i+1,array[i]);
	}
	
}

void MergeSplite(start,end){
	int mid=(start+end)/2;
	if(start<end){
	
		MergeSplite(start,mid);
		MergeSplite(mid+1,end);
		MergeJoin(start,mid,end);
		
	}
	
}
void MergeJoin(start,mid,end){
	int s=start,e=end,m=mid,i,j,temp;
	for ( i=start;i<=end;i++ ) 
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
	
}
