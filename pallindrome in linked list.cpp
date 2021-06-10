#include<iostream>
using namespace std;
struct node{
	string data;
	struct node *next;
}*head=NULL;
int main()
{
	int n;
	cin>>n;
	node *temp=new node();
	for(int i=0;i<n;i++)
	{
		string element;
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
	int i,k;
	string s;
	temp=head;
	while(temp)
	{
		s=s+temp->data;
		temp=temp->next;
	}
	cout<<s;
	k=n-1;
	int n1=s.length();
	for(i=0;i<n1/2;i++)
	{
		if(s[i]!=s[k])
		{
			cout<<"not pallindrome";
		}
		k--;
	}
	cout<<"pallindrome";
}
