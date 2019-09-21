#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int mx=-1,j=0;
	long long int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>mx)
		{
			mx=a[i];
			j=i;
		}
	}
	if(mx==1)
	{
		a[j]=2;
	}
	else a[j]=1;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}