#include<iostream>
#include<stack>
using namespace std;
bool balancingparenthesis(string s)
{
	int n,i;
	n=s.length();
	stack<int>stack;
	char c,x;
	for(i=0;i<n;i++)
	{
		c=s[i];
		if(c=='(' || c=='[' || c=='{')
		{
			stack.push(c);
		}
		else
		{
			x=stack.top();
			if(c==')')
			{
				if(x!='(')
					return false;
			}
			if(c==']')
			{
				if(x!='[')
					return false;
			}
			if(c=='}')
			{
				if(x!='{')
					return false;
			}
			stack.pop();
		}
	}	
		return (stack.empty());
		
} 
int main()
{ 
	string s;
	cin>>s;
	if(balancingparenthesis(s))
	{
		cout<<"balanced";
	}
	else
	{
		cout<<"unbalanced";
	}
}
