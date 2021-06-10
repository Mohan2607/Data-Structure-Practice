#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL,*head2=NULL,*dummyhead=NULL;
int main()
{
	int n=5;
	cout<<"Enter the 5 node element:"<<endl;
	int count=0;
	node *temp=new node();
	for(int i=0;i<n;i++)
	{
		node *newnode =new node();
		int ele;
		cout<<"Enter the element:";
		cin>>ele;
		if(head==NULL)
		{
			newnode->data=ele;
			newnode->next=NULL;
			head=newnode;
			count=1;
		}
		else{
			newnode->data=ele;
			newnode->next=NULL;
			count++;
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	for(int i=0;i<n;i++)
	{
		node *newnode =new node();
		int ele;
		cout<<"Enter the element in the list2:";
		cin>>ele;
		if(head2==NULL)
		{
			newnode->data=ele;
			newnode->next=NULL;
			head2=newnode;
			count=1;
		}
		else{
			newnode->data=ele;
			newnode->next=NULL;
			count++;
			temp=head2;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	node *temp1=head;
	node *temp2=head2;
	while(temp1)
	{
		while(temp2)
		{
			cout<<temp1->next<<" "<<temp2->next;
			if(temp1->next==temp2->next )
			{
				cout<<temp1->next->data;
			}
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
}/*#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
}*head=NULL,*head2=NULL;
int main()
{
	int n;
	cout<<"enter n1:";
	cin>>n;
	node *temp=new node();
	for(int i=0;i<n;i++)
	{
		int element;
		cout<<"enter the element of list1:";
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
	while(temp)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	for(int i=0;i<n;i++)
	{
		int ele;
		cout<<"enter the element of list2:";
		cin>>ele;
		node *newnode=new node();
		if(head2==NULL)
		{
			newnode->data=ele;
			newnode->next=NULL;
			head2=newnode;
		}
		else
		{
			newnode->data=ele;
			newnode->next=NULL;
			temp=head2;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	temp=head2;
	while(temp)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
	node *temp1=head;
	node *temp2=head2;
	while(temp1)
	{
		while(temp2)
		{
			if(temp1->next==temp2->next)
			{
				cout<<temp1->next->data;
			}
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
}*/
