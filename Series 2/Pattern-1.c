#include<stdio.h>
  void main()
  {
    int n,i,j,k;
    printf("Enter the Numnber :- ");
    scanf("%d",&n);

    for (i = 1; i <= n;i++)
    {          if(i%2==0){
        k=0;
      }
      else{
        k=1;
      }
      for (j= 0; j < n; j++)
      {
        printf("%d ",k);
        if (k==0){
          k=1;
        }
        else{
  k=0;
        }
      }
      printf("\n");
    }
  }
