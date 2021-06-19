#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left=NULL;
	node *right=NULL;
}*root=NULL;
node * insert(node* root,int data)
{
	if(root==NULL)
	{
		node *newnode=new node();
		newnode->data=data;
		root=newnode;
		return root;
	}
	if(root->data>data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root;
}
node * deletetarget(node *root,int data)
{
	if(root==NULL)
		return root;
	if(data>root->data)
	{
		root->right=deletetarget(root->right,data);
	}
	else if(data<root->data)
	{
		root->left=deletetarget(root->left,data);
	}
	else
	{
		if(root->left!=NULL && root->right!=NULL)
		{
			return root;
		}
		else if(root->left==NULL)
		{
			node *temp=root->right;
			delete(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			node *temp=root->left;
			delete(root);
			return temp;
		}
		node *temp=root->right;
		while(temp!=NULL && temp->left!=NULL)
		{
			temp=temp->left;
		}
		root->data=temp->data;
		root->right=deletetarget(root->right,temp->data);
	}
	return root;
}
void inorder(node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}
int main()
{
	root=insert(root,10);
	insert(root,20);
	insert(root,30);
	insert(root,40);
	insert(root,50);
	insert(root,60);
	insert(root,9);
	insert(root,8);
	int ele;
	cout<<"Enter the element:";
	cin>>ele;
	deletetarget(root,ele);
	inorder(root);
}
