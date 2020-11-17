            #include <stdio.h>
#include <stdlib.h>

int Start=-1;
int Array[5000];

void PrintLinkList();

void main(){
	int i,j,k=1;
	while(k==1){
	   printf("For PUSH  Pess 1 \n Print Stack Press 2 \n POP Press 3 \n");
		scanf("%d",&i);
		if(i==1){
			printf("Enter The data which you want to store \n");
			
			if(Start== -1){
				Start=0;
				scanf("%d",&Array[Start]);
				
			}
			else{
				Start ++;
				scanf("%d",&Array[Start]);
			}
		}
		else if(i==2){
			PrintStack();
		}
		else if(i==3){
			if(Start==-1){
				printf("Empty Stack \n");	
			}
			else{
				printf("%d is deleted Data \n",Array[Start]);
				Start--;
			}
			
		}
		else{
			printf("Enter Valid Input \n");
		}
			printf("Press 2 For break \n ");	
	}
	
	
}
void PrintStack(){
	int i;
	for(i=0;i<=Start;i++)
	{
		printf("%d --> ",Array[i]);
	}
		printf("Empty Stack \n");

	
}
