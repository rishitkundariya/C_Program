#include<stdio.h>
void main()
{
	int n1,n2,i=1,small=0,lcm=0,gcd=0;
	printf("Enter the First number :- ");
	scanf("%d",&n1);
	printf("Enter the Second number :- ");
	scanf("%d",&n2);
	while(i>0)
	{
		if(i%n1==0 && i%n2==0)
		{
			lcm=i;
			break;
		}
		i++;
	}
	printf("Lcm of %d and %d is %d \n",n1,n2,lcm);
	
	if(n1 > n2)
	{
		small=n2;
	}
	else{
		small=n1;
	}
	for(i=1;i<=small;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
	}
	printf("GCD of %d and %d is %d",n1,n2,gcd);
}
