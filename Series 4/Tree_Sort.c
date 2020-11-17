#include<stdio.h>
#include<stdlib.h>
  
struct node
{
    int key;
    struct node *left, *right;
};
  

struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
  

struct node* insert(struct node* node, int key)
{
   
    if (node == NULL) return newNode(key);
 
    
    if (key <= node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
 
    
    return node;
}
  

void main()
{
   int i,array[5000],j,k=0,temp=0,n;
	printf("Enter the Number which You want to enter in array  ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter %d number : - ",i+1);
		scanf("%d",&array[i]);
	}
    struct node *root = NULL;
    root = insert(root, array[0]);
    	for (i=1;i<n ;i++ ) 
	{
		insert(root, array[i]);
	}
    
 
   
    inorder(root);
  
  
}
