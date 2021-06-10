#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int n,i;
	cin>>n;
	node *temp=new node();
	for(i=0;i<n;i++)
	{
		int element;
		cout<<"enter element:";
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
	int pos,target;
	cout<<"enter pos";
	cin>>pos;
	temp=head;
	for(i=1;i<n;i++)
	{
		if(pos==1)
		{
			head=head->next;
			break;
			
		}
		if(i==pos-1)
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
