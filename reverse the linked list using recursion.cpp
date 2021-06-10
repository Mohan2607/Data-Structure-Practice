#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int n;
	cin>>n;
	node *temp=new node();
	for(int i=0;i<n;i++)
	{
		int element;
		cout<<"enter the element:";
		cin>>element;
		node *newnode=new node();
		if(head==NULL)
		{
			newnode->data=element;
			newnode->next=NULL;
			head=newnode;
		}
		else
		{
			newnode->data=element;
			newnode->next=NULL;
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	node* current=head;
	node* prev=NULL;
	node* nextone=NULL;
	while(current)
	{
		nextone=current->next;
		current->next=prev;
		prev=current;
		current=nextone;
	}
	head=prev;
	temp=head;
	while(temp)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	
}
