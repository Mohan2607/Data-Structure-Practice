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
	int target;
	cout<<"enter target:";
	cin>>target;
	temp=head;
	while(temp!=NULL)
	{
		if(head->data==target)
		{
			if(head->next==NULL)
			{
				head=NULL;
			}
			else{
				head=head->next;
				break;
			}
		}
		else if(temp->next->data==target)
		{
			temp->next=temp->next->next;
			break;
		}
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
