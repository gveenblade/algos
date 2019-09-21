#include<iostream>
using namespace std;
int main()
{
	long long int n,k;
	long long int sum = 0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
		if(sum>=k && sum-(n-i)==k)
		{
			cout<<n-i;
			break;	
		}
	}
	return 0;
}