#include<iostream>
using namespace std;
int main()
{
	int l,r,a;
	int n=0,m=0;
	int sum = 0;
	cin>>l>>r>>a;
	if(l>r)
	{
		if(r+a>l)
		{
			m=l-r;
			r+=m;
			a-=m;
			sum = l+(a/2)+r+(a/2);
		}
		else if(r+a<l)
		{
			sum = r+a+r+a;
		}
		else if(r+a==l)
		{
			sum = r+l+a;
		}
	}
	else if(r>l)
	{
		if(l+a>r)
		{
			m=r-l;
			l+=m;
			a-=m;
			sum = r+(a/2)+l+(a/2);
		}
		else if(l+a<r)
		{
			sum = l+a+l+a;
		}
		else if(l+a==r)
		{
			sum = r+l+a;
		}
	}
	else if(l==r)
	{
		sum = l+(a/2)+r+(a/2);
	}
	cout<<sum;
	return 0;
}