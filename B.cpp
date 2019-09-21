#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,m,k,q,a[11111];
	cin>>q;
	for(int i =0;i<q;i++)
	{
		cin>>n>>m>>k;
		if(((n==1&&m==1)||(n==-1&&m==1)||(n==-1&&m==1)||(n==1&&m==-1))&&k==1)
		{
			a[i]=1;
		}
		else if(((n==1&&m==0)||(n==-1&&m==0)||(n==0&&m==1)||(n==0&&m==-1))&&k==1)
		{
			a[i]=0;
		}
		else if(k<max(m,n))
		{
			a[i]=-1;
		}
		else if(n%2==0&&m%2==0)
		{
			if(k%2==0) a[i]=k;
			else a[i]=k-2;
		}
		else if(n%2!=0&&m%2!=0)
		{
			if(k%2==0) a[i]=k-2;
			else a[i]=k;
		}
			else if(n!=m)
		{
			a[i]=k-1;
		}
	}
	for(int i =0;i<q;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
