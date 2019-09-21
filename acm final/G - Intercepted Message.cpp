#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,m;
	long long int ans = 0;
	long long int a[111111],b[111111];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i<=m;i++)
	{
		cin>>b[i];
	}
	int l=1,r=1;
	while(l!=n&&r!=m)
	{

		if(a[l]>b[r])
		{
			b[++r]=b[r]+b[r-1];
		}	
		else if(a[l]<b[r])
		{
			a[++l]=a[l]+a[l-1];
		}
		if(a[l]==b[r])
		{
			ans++;
			l++;
			r++;
		}
	}
	cout<<ans+1;
	return 0;
}