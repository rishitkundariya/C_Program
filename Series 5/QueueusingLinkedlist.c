#include <stdio.h>
#include <stdlib.h>


struct node {
  int data;
  struct node* right;
  struct node* left;
};
struct node* Start=NULL;
struct node* End =NULL;
void CreateNode(int x);
void PrintLinkList(struct node* First );

void main(){
	int i,j,k=1,n;
	while(k==1){
		printf("For Incerction  Pess 1 \n Print Queue Press 2 \n ");
		scanf("%d",&i);
		if(i==1){
			printf("Enter The data which you want to store \n");
			scanf("%d",&n);	
			CreateNode(n);
		}
		else if(i==2){
			PrintLinkList(Start);
		}
		else{
			printf("Enter Valid Input \n");
		}
			printf("Press 2 For break \n ");	
	}
	
	
}
void PrintLinkList(struct node* First ){
	while(First!=End){
		printf("%d -->",First->data);
		First=First->right;
	}
	printf("%d -- ",First->data);
	
	
}
void CreateNode(int x){
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = x;
	if(Start==NULL && End==NULL){
		newNode->right = Start;	
		newNode->left = Start;
		Start=End=newNode;
	}
	else{
		End->right=newNode;
		newNode->right=NULL;
		newNode->left=End;
		End=newNode;
	}	
	
}
