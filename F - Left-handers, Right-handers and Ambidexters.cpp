#include<iostream>
using namespace std;
int main()
{
	int l,r,a;
	int n=0,m=0;
	int ans = 0;
	cin>>l>>r>>a;
	if(l>r)
	{
		m=r-l;
		if(l+a<r)
		{	
			ans=(l+a);
		}
		else
		{
			n=r-(l+a)
			{
				ans = r+n/2+l+a+n/2;
			}
		}
	}
	else if(r>l)
	{
		m=r-l;
		if(r+a<l)
		{	
			ans=(r+a);
		}
		else
		{
			n=l-(r+a)
			{
				ans = l+n/2+r+a+n/2;
			}
		}
	}
	else if(l==r)
	{
		l+=a/2;
		r+=a/2;
		ans=l+r;
	}
	cout<<ans;

	
}