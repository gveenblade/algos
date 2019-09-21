#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int a,b,s[1111111];
	long long int n;
	int sum=0;
	int ans =0;
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			sum+=s[j];
			//cout<<sum<<"-sum"<<endl;
			//cout<<a*s[1]/sum<<"-res"<<endl;
		}
		sum+=s[1];
		if((double)a*s[1]/sum>=b)
		{
			cout<<ans;
			return 0;
		}
		else ans++;
		sum = 0;
	}
		cout<<ans;
		return 0;
	}