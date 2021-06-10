#include<iostream>
#include<queue>
using namespace std;
class stack
{
	public:
		queue<int>q1,q2;
		int currentsize=0;
		void push(int x)
		{
			currentsize++;
			q2.push(x);
			while(!q1.empty())
			{
				q2.push(q1.front());
				q1.pop();
			}
			queue<int>q=q1;
			q1=q2;
			q2=q;
		}
		void pop()
		{
			if(q1.empty())
			{
				return;
			}
			else
			{
				q1.pop();
				currentsize--;
			}
		}
		int peek()
		{
			if(q1.empty())
			{
				return -1;
			}
			else
			{
				int x=q1.front();
				return x;
			}
		}
};
int main()
{
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.peek()<<" ";
	s.pop();
	cout<<s.peek()<<" ";
	s.pop();
	cout<<s.peek();
}
