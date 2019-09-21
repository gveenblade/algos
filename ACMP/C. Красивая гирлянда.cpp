#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int l,r=0,t,y,n,a[201];
	string s;
	cin>>n;
	cin>>s;
	if(n>3&&s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[0])
	{
		for(int i=3;i<n;i++)
		{
			if(s[i]!=s[i-3])
			{
				s[i]=s[i-3];
				r++;
			}
		}
		cout<<r<<endl<<s;
	}
	else if(n<4)
	{
		if(n==1)
		{
			cout<<0<<endl<<s;
		}
		else if(n==2)
		{	
			if(s[0]==s[1])
			{
				if(s[0]=='G')
				{
					s[0]=='B';
				}
				else if(s[0]=='B')
				{
					s[0]=='G';
				}
				else if(s[0]=='R')
				{
					s[0]=='B';
				}
				cout<<1<<endl<<s;
			}
			else cout<<0<<endl<<s;
		}
		else if(n==3)
		{
			if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[0])
				cout<<2<<endl<<"RGB";
			else if(s[0]!=s[1]&&s[1]!=s[2]&&s[2]!=s[0])
				cout<<0<<endl<<s;
			else if(s[0]==s[1])
			{
				if(s[2]=='R')
				{
					if(s[1]=='B')
						s[0]='G';
					else if(s[1]=='G')
						s[0]='B';
				}
				else if(s[2]=='G')
				{
					if(s[1]=='B')
						s[0]='R';
					else if(s[1]=='R')
						s[0]='B';
				}
				else if(s[2]=='B')
				{
					if(s[1]=='R')
						s[0]='G';
					else if(s[1]=='G')
						s[0]='R';
				}
				cout<<1<<endl<<s;
			}
		}
	}
	return 0;
}