#include<iostream>
#include<queue>
#include<stack>
using namespace std;
stack<int> l;
stack<int> r;
int n;
string s;
char x,y,f;
char mid,mn,mx,p,o,b;
int q[2];
void solve1()
{

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>x>>f>>y;
	if(f=='>')
	{
		p=x;
		o=y;
	}
	else
	{
		p=y;
		o=x;
	}
	cin>>x>>f>>y;
	if(f=='>')
	{
		if(x==p)
		{
			mx=x;
			b=y;
		}
		else if(x==o)
		{
			mn=y;
			b=x;
		}
		else if(y==p)
		{
			mx=x;
			b=y;
		}
		else if(y==o)
		{
			mn=o;
			b=x;
		}

	}
	else
	{
		if(x==p)
		{
			mx=y;
			b=x;
		}
		else if(x==o)
		{
			mn=x;
			b=y;
		}
		else if(y==p)
		{
			mx=y;
			b=x;
		}
		else if(y==o)
		{
			mn=x;
			b=y;
		}
	}
	
	cin>>x>>f>>y;
	if(f=='>')
	{
		if(x==b)
		{
			mid=b;
			mn=y;
		}
		else if(y==b)
		{
			mid =y;
			mx = x;
		}
	}
	else  
	{
		if(x==b)
		{
			mid=x;
			mx=y;
		}
		else if(y==b)
		{
			mid =y;
			mn = x;
		}
	}
	cout<<mn<<endl<<mid<<endl<<mx;

}
void solve2(){
	cin>>s;
	if(s[0]=='A')
	{
		if(s[1]=='>')
		{
			q[0]++;
		}
		else if(s[2]=='B') q[1]++;
		else if(s[2]=='C') q[2]++;
	}
	else if(s[0]=='B')
	{
		if(s[1]=='>')
		{
			q[1]++;
		}
		else if(s[2]=='A') q[0]++;
		else if(s[2]=='C') q[2]++;
	}
	else if(s[0]=='C')
	{
		if(s[1]=='>')
		{
			q[2]++;
		}
		else if(s[2]=='A') q[0]++;
		else if(s[2]=='B') q[1]++;
	}
	cin>>s;
	if(s[0]=='A')
	{
		if(s[1]=='>')
		{
			q[0]++;
		}
		else if(s[2]=='B') q[1]++;
		else if(s[2]=='C') q[2]++;
	}
	else if(s[0]=='B')
	{
		if(s[1]=='>')
		{
			q[1]++;
		}
		else if(s[2]=='A') q[0]++;
		else if(s[2]=='C') q[2]++;
	}
	else if(s[0]=='C')
	{
		if(s[1]=='>')
		{
			q[2]++;
		}
		else if(s[2]=='A') q[0]++;
		else if(s[2]=='B') q[1]++;
	}
	cin>>s;
	if(s[0]=='A')
	{
		if(s[1]=='>')
		{
			q[0]++;
		}
		else if(s[2]=='B') q[1]++;
		else if(s[2]=='C') q[2]++;
	}
	else if(s[0]=='B')
	{
		if(s[1]=='>')
		{
			q[1]++;
		}
		else if(s[2]=='A') q[0]++;
		else if(s[2]=='C') q[2]++;
	}
	else if(s[0]=='C')
	{
		if(s[1]=='>')
		{
			q[2]++;
		}
		else if(s[2]=='A') q[0]++;
		else if(s[2]=='B') q[1]++;
	}
	if(q[0]==2)
	{
		if(q[1]==1)
		{
			cout<<"CBA";
		}
		else if(q[2]==1)
		{
			cout<<"BCA";
		}
	}
	else if(q[1]==2)
	{
		if(q[0]==1)
		{
			cout<<"CAB";
		}
		else if(q[2]==1)
		{
			cout<<"ACB";
		}
	}
	else if(q[2]==2)
	{
		if(q[0]==1)
		{
			cout<<"BAC";
		}
		else if(q[1]==1)
		{
			cout<<"ABC";
		}
	}
	else cout<<"Impossible";

}
int main()
{	
	solve2();
	return 0;
}
