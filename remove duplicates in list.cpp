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
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data==temp->next->data)
		{
			temp->next=temp->next->next;
		}
		else
		{
			temp=temp->next;
		}
	}
		temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}
