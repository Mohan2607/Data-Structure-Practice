#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
}*head=NULL;
int main()
{
	int n,count=0;
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
			count++;
			newnode->next=NULL;
			head=newnode;
		}
		else
		{
			newnode->data=element;
			count++;
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
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\ncount"<<count;
	/*node *ptr1=head;
	node *ptr2=head;
	while(ptr1->next!=NULL)
	{
		ptr1=ptr1->next;
		if(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
	}*/
	
	//cout<<\n<<"middle element:"<<ptr2->data;
	for(int i=0;i<count/2;i++)
	{
		head=head->next;
	}
	cout<<head->data;
}
