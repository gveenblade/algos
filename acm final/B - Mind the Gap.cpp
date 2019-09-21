#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,s;
	long long int t[1111];
	cin>>n>>s;
	for(int i=1;i<=n;i++)
	{
		int h,m;
		cin>>h>>m;
		t[i]=h*60+m;
	}
	t[0]=0;
	if(s<t[1])
	{
		cout<<0<<" "<<0;
	}
	else 
	{
		for(int i=0;i<n;i++)
		{
			if(t[i+1]-t[i]>2*s+1)
			{
				cout<<(t[i]+s+1)/60<<" "<<(t[i]+s+1)%60;
				return 0;
			}
		}
		cout<<(t[n]+s+1)/60<<" "<<(t[n]+s+1)%60;
	}
	return 0;
}