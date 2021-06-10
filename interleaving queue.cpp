/*Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.
Only a stack can be used as an auxiliary space.

Input : 11 12 13 14 15 16 17 18 19 20
Output : 11 16 12 17 13 18 14 19 15 20 */
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;
	stack<int> s;
	stack<int> s1;
	int n;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	q.push(18);
	q.push(19);
	q.push(20);
	n=q.size();
	for(int i=0;i<n/2;i++)
	{
		int ele=q.front();
		s.push(ele);
		q.pop();
	}
	while(!s.empty())
	{
		int ele=s.top();
		s1.push(ele);
		s.pop();
	}
	queue<int> result;
	for(int i=0;i<n/2;i++)
	{
		int a=s1.top();
		result.push(a);
		s1.pop();
		int b=q.front();
		result.push(b);
		q.pop();
	}
	cout<<"result:";
	while(!result.empty())
	{
		cout<<result.front()<<" ";
		result.pop();
	}
}

