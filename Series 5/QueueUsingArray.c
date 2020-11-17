	 #include <stdio.h>
#include <stdlib.h>

int Start=-1,End=-1;
int Array[5000];

void PrintLinkList();

void main(){
	int i,j,k=1;
	while(k==1){
		printf("For Incerction  Pess 1 \n Print Queue Press 2 \n Delection Press 3 \n");
		scanf("%d",&i);
		if(i==1){
			printf("Enter The data which you want to store \n");
			
			if(Start== -1 && End == -1){
				Start=End=0;
				scanf("%d",&Array[End]);
				
			}
			else{
				End ++;
				scanf("%d",&Array[End]);
			}
		}
		else if(i==2){
			PrintQueue();
		}
		else if(i==3){
			printf("%d is deleted Data \n",Array[Start]);
			Start++;
		}
		else{
			printf("Enter Valid Input \n");
		}
			printf("Press 2 For break \n ");	
	}
	
	
}
void PrintQueue(){
	int i;
for(i=Start;i<End;i++)
{
	printf("%d --> ",Array[i]);
}
	printf("%d  \n",Array[i]);
	
}
