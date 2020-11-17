#include <stdio.h>
#include <stdlib.h>


struct node {
  int data;
  struct node* right;
};
struct node* Start=NULL;
void CreateNode(int x);
void PrintLinkList(struct node* First );
void main(){
	int i,j,k=1,n;
	while(k==1){
		printf("For PUSH Pess 1 \n For Display Press 2 \n For POP Press 3 \n ");
		scanf("%d",&i);
		if(i==1){
			printf("Enter The data which you want to store \n");
			scanf("%d",&n);	
			CreateNode(n);
		}
		else if(i==2){
			PrintLinkList(Start);
		}
		else if(i==3){
			if(Start==NULL){
				printf("Empty Stack \n");
			}
			else{
				printf("%d is Deleted Element  \n",Start->data);
				Start=Start->right;
			}
		}
				
		else{
			printf("Enter Valid Input \n");
		}
			printf("Press 2 For break \n ");	
	}
	
	
}
void PrintLinkList(struct node* First ){
	if(First==NULL){
		printf("Empty Stack \n");
		return ;
	}
	while(First!=NULL){
		printf(" %d --> ",First->data);
		First=First->right;
	}
	
}
void CreateNode(int x){
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = x;
	newNode->right = Start;
	Start=newNode;	
	
}
