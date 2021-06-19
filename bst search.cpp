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
		cout<<root->data<<" ";
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

void inorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
node* search(struct node* root, int key)
{
    if (root == NULL || root->data == key)
       return root;
    
    if (root->data < key)
       return search(root->right, key);
 
    return search(root->left, key);
}
int main()
{
	root=insert(root,10);
	insert(root,20);
	insert(root,30);
	insert(root,40);
	insert(root,50);
	insert(root,60);
	cout<<endl;
	//inorder(root);
	int key;
	cout<<"enter the element to search:";
	cin>>key;
	node *temp=search(root,key);
	if(temp==NULL)
		cout<<"element is not found:";
	else
		cout<<"element found:";
	
	
}
