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
	struct node *ptr1,*ptr2;
	ptr1=head;
	while(ptr1!=NULL && ptr1->next!=NULL)
	{
		ptr2=ptr1;
		while(ptr2->next!=NULL)
		{
			if(ptr1->data==ptr2->next->data)
			{
				ptr2->next=ptr2->next->next;
			}
			else
			{
				ptr2=ptr2->next;
			}
		}
		ptr1=ptr1->next;
	}
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
