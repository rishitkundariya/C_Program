
#include<stdio.h>
#include<string.h>
#define N 10
 
void print(int *num, int n)
{
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", num[i]);
    printf("\n");
}
void main()
{
    int num[N];
    int *ptr;
    int temp;
    int i, n, j;
    printf("Enter number Of count : ");
    scanf("%d", &n);
    
    for (i = 0 ; i < n; i++)
       {
       	num[i]=i+1;
	   }
    for (j = 1; j <= n; j++) {
        for (i = 0; i < n-1; i++) {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
    
}
