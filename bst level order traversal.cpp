#include<iostream>
#include<queue>
using namespace std;
struct node{
	int data;
	node *left=NULL;
	node *right=NULL;
}*root=NULL;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ele;
		cout<<"enter the element:";
		cin>>ele;
		if(root==NULL)
		{
			node *newnode=new node();
			newnode->data=ele;
			root=newnode;
		}
		else
		{
			node *newnode=new node();
			newnode->data=ele;
			node *temp=root;
			while(temp->left!=NULL)
			{
				temp=temp->left;
			}
			temp->left=newnode;
		}
	}
	node *temp=root;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->left;
	}
	int k;
	cout<<"enter k:";
	cin>>k;
	node *newnode=new node();
	newnode->data=k;
	root->right=newnode;
	queue<node *> q;
	q.push(root);
	while(!q.empty())
	{
		node *temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left!=NULL)
		{
			q.push(temp->left);
		}
		if(temp->right!=NULL)
		{
			q.push(temp->right);
		}
	}
}
