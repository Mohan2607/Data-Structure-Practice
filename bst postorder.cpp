#include<iostream>
#include<queue>
using namespace std;
struct node{
	int data;
	node *left=NULL;
	node *right=NULL;
}*root=NULL;
void postorder(node *temp)
{
	if(temp==NULL)
	{
		return;
	}
	postorder(temp->left);
	postorder(temp->right);
	cout<<temp->data<<" ";
}
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
	cout<<"postorder:";
	postorder(root);
}
