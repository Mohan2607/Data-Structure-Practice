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
		node *newnode=new node();
		int element;
		cout<<"enter element:";
		cin>>element;
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
			while(temp->next!=NULL){
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
	temp=head;
	int target,count=0,i;
	cout<<"enter target:";
	cin>>target;
	for(i=0;i<n;i++)
	{
		if(target==temp->data)
		{
			count=count+1;
			temp=temp->next;
		}
	}
	cout<<count;
}
