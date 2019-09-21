#include<iostream>
#include<algorithm>
using namespace std;
long long int n,a[11111],b[11111],c[11111];
	
int main()
{
	cin>>n;
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];

	}
	int cnt=1;
	b[1]=1;
	for(int i=1;i<n;i++)
	{
		if(a[i+1]>a[i])
		{
			++cnt;
		}
		else cnt=1;
		b[i+1]=cnt;
	}
	cnt=1;
	c[n]=cnt;
	for(int i=n;i>1;i--)
	{
		if(a[i-1]>a[i])
		{
			++cnt;
		}
		else cnt=1;
		c[i-1]=cnt;
	}
	int ans=0;
	
	for(int i=1;i<=n;i++)
	{
		
		ans+=max(b[i],c[i]);
	}
	cout<<ans;
	return 0;
}