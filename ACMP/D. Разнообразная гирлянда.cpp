#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int l,r=0,t,y,n,a[201];
	string s;
	cin>>n;
	cin>>s;
	for(int i=1;i<n-1;i++)
	{
		if(s[i]==s[i-1])
		{
			if(s[i]==s[i+1])
			{
				if(s[i]=='B')
					s[i]='G';
				else if(s[i]=='R')
					s[i]='G';
				else if(s[i]=='G')
					s[i]='B';
			}
			else 
			{
				if(s[i-1]=='B')
				{
					if(s[i+1]=='G')
						s[i]='R';
					else if(s[i+1]=='R')
						s[i]='G';
				}
				else if(s[i-1]=='G')
				{
					if(s[i+1]=='B')
						s[i]='R';
					else if(s[i+1]=='R')
						s[i]='B';
				} 
				else if(s[i-1]=='R')
				{
					if(s[i+1]=='G')
						s[i]='B';
					else if(s[i+1]=='B')
						s[i]='G';
				}
			}
			r++;
		}
	}
	if(s[n-1]==s[n-2])
	{
		if(s[n-2]=='B')
			s[n-1]='G';
		else if(s[n-2]=='G')
			s[n-1]='B';
		else if(s[n-2]=='R')
			s[n-1]='B';
		r++;
	}
	cout<<r<<endl<<s;
	return 0;
}