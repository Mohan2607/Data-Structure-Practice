#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
}*head=NULL,*dummyhead=NULL,*dummyhead1=NULL;
int main()
{
	int i,n;
	cout<<"enter list1 n:";
	cin>>n;
	node *temp=new node;
	for(i=0;i<n;i++)
	{
		int ele;
		cout<<"enter the element:";
		cin>>ele;
		node *newnode=new node();
		if(head==NULL)
		{
			newnode->data=ele;
			newnode->next=NULL;
			head=newnode;
		}
		else
		{
			newnode->data=ele;
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
	temp=head;
	node *dummytemp=new node();
	while(temp!=NULL)
	{
	 if(temp->data%2==0)
		{
					node *dummy=new node();
					if(dummyhead==NULL)
					{
						dummy->data=temp->data;
						dummy->next=NULL;
						dummyhead=dummy;
					}
					else
					{
						dummy->data=temp->data;
						dummy->next=NULL;
						dummytemp=dummyhead;
						while(dummytemp->next!=NULL)
						{
							dummytemp=dummytemp->next;
						}
						dummytemp->next=dummy;
					}
					
				}
				else
				{
				node *dummy1=new node();
					if(dummyhead1==NULL)
					{
						dummy1->data=temp->data;
						dummy1->next=NULL;
						dummyhead1=dummy1;
					}
					else
					{
						dummy1->data=temp->data;
						dummy1->next=NULL;
						dummytemp=dummyhead1;
						while(dummytemp->next!=NULL)
						{
							dummytemp=dummytemp->next;
						}
						dummytemp->next=dummy1;
					}
				}
					temp=temp->next;
				}
		cout<<endl;		
	 temp=dummyhead;
	 while(temp!=NULL)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }
	 //cout<<endl;
	 temp=dummyhead1;
	 while(temp!=NULL)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }
	 
	 temp=head;
	 
	}

	
