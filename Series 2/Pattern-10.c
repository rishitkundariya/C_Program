#include<stdio.h>
main(){
	int n=9;
	int i,j,k=1,l,r=0,y;
	for(i=1;i<=n;i=i+2){
		l=k;r=0;
		for(y=0;y<=(n/2)-k;y++){
			printf("  ");
		}
		for(j=1;j<=i;j++){
		  if(l<i && r==0){
		  	printf("%d ",l);
		  	l++;
		  }
		  else if(l==i && r==0){
		  	printf("%d ",l);
		 	r=1;
		  }
		  else{
		  	--l;
		  	printf("%d ",l);
		  }
		   
	    }
	    k++;
	    printf("\n");
	}
}
