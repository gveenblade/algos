#include<iostream>
using namespace std;
string s;
bool victory=false,dd,rr;
int n,l,r,q,w;
char v[211111];
void solve1()
{
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		v[i]=s[i];
	}
	l=0;
	r=n-1;
	if(l==r)
	{
		cout<<s;
	}
	else 
	{
	while(!victory)
	{
		//cout<<1;
		if(v[l]=='D')
		{
			while(v[l+r]!='R')
			{
				r++;
				if(r==n-1)
				{
					//cout<<2;
					dd=true;
					victory=true;
					break;
					//cout<<"D";
					//return 0;

				}
			}
			if(v[r]=='R')
			{
				v[r]='B';
			}
			r=n-1;
		}
		else if(v[l]=='R')
		{
			while(v[r]!='D')
			{
				r--;
				if(r==0)
				{
					
					//cout<<3;
					rr=true;
					victory=true;
					break;
					//cout<<"R";
					//return 0;
				}
			}
			if(v[r]=='D')
			{
				v[r]='B';
			}
			r=n-1;
		}
		l++;
		l%=(n);
	}

/*	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<v[i];
	}
	cout<<endl;*/
	if(rr) cout<<"R";
	else cout<<"D";
}
}
int main()
{
	solve1();
	return 0;
}