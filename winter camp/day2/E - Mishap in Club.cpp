#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
long long int n,a,b,cnt,mx,mn,x=1,y=1,q=0,w=0;
string s;
void solve1()
{	
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+')
		{
			cnt++;
			if(cnt>mx)
			{
				mx = cnt;
			}
		}
		if(s[i]=='-')
		{
			cnt--;
			if(cnt<mn)
			{
				mn=cnt;
			}
		}

	}
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]=='+'&&s[i+1]=='+')
		{
			x++;
			y=1;
			if(x>q)
			{
				q=x;
			}
		}
		else if(s[i]=='-'&&s[i+1]=='-')
		{
			y++;
			x=1;
			if(y>w)
			{
				w=y;
			}
		}
	}
	
	if(cnt<0)
	{
		if(abs(mn)>w)
		cout<<abs(mn);
		else cout<<w; 
	}
	else {
		cout<<q;
	}
}
void solve2()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+')
		{
			cnt++;
			
		}
		else 
		{
			cnt--;
		}
		q=max(cnt,q);
		w=min(cnt,w);
	}
	cout<<q-w;
}
int main()
{
solve2();
return 0;
}
