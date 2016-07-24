/*
AUTHOR - Sangram Barge
Code to insert and search binary tree
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* getNode(int data)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

struct node* Insert(struct node* root,int data)
{
	if(root == NULL)
	{
		root = getNode(data);
	}
	else if(data <= root->data)
	{
		root->left = Insert(root->left,data);
	}
	else 
	{
		root->right = Insert(root->right,data);
	}
	return root;
}

int search(struct node *root, int data)
{
		if(root==NULL) return 0;
		else if(root->data ==data) return 1;
		else if(data <=root->data) return search(root->left,data);
		else if(data >= root->data) return search(root->right,data);
}

int main(void)
{
	struct node* root=NULL;
	root =Insert(root,10);
	root =Insert(root,20);	
	root =Insert(root,7);
	root =Insert(root,13);
	int number;
	scanf("%d",&number);
	if(search(root,number)==1) printf("found ");
	else printf("Not found \n");
	return 0;
}
