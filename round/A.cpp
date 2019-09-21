#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int tt=1;tt<=t;tt++)
	{
		long long int n,a,b;
		cin>>n>>a>>b;
		if(n==1)
		{
			cout<<a;
		}
		else 
		{
			if(b<a*2)
			{
				if(n%2==0)
				{
					cout<<n/2*b;
				}
				else {
					cout<<n/2*b+a;
				}
			}
			else if(b>=a*2)
			{
				cout<<n*a;
			}
		}
		cout<<endl;
	}
	return 0;
}