#include<stdio.h>
void main(){
	int i,n,j;
	printf("Enter  Number :- ");
	scanf("%d",&n);
	int sum=0;
	while(n > 0 || sum > 9) 
    { 
        if(n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        printf(" sum = %d \n",sum);
        n /= 10; 
        printf(" n = %d \n",n);
    }
    
	printf("sum of digit = %d ",sum);
}
