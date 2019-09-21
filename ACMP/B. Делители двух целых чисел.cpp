#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int l,r,t,y,n,a[201];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n]<<" ";
	int j=n-1;
	while(a[n]%a[j]==0)
	{
		j--;
	}
	if(j==0)
	{
		j=n;
		while(a[j]!=a[j-1])
		{
			j--;
		}
		cout<<a[j-1];
	}
	else
	cout<<a[j];
	return 0;
}