#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	
	long long int n,m,k;
	cin>>n>>k;
	if(k%n==0)
	{
		cout<<k/n;
	}
	else cout<<k/n+1;
	return 0;
}
