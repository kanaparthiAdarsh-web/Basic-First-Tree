#include<stdio.h>
struct node
{
	struct node *right;
	int ele;
	struct node *left;
};
struct node *root=NULL;
void insert(int val)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->ele=val;
	temp->right=NULL;
	temp->left=NULL;
	if(root==NULL)
		root=temp;
	else
	  if(root->ele > val)
	     root->left=temp;
	  else
	     root->right=temp;
}
void main()
{
	clrscr();
	insert(50);
	insert(30);
	insert(70);
	printf("Left Root is %d -> Main Root is %d -> Right Root is %d",root->left->ele,root->ele,root->right->ele);
	getch();
}